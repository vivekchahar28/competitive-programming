#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ft first
#define sd second
#define VI vector<int>
#define VLL vector<long long int>
#define PII pair<int,int>
#define pb push_back
#define rsz(v,n) v.resize(n)
// input and output
#define scan(x) scanf("%d",&x)
#define scanll(x) scanf("%lld",&x)
#define ll long long int
#define rep(i,x,y) for(i=x;i<y;i++)
#define print(x) printf("%d\n",x)
#define printll(x) printf("%lld\n",x)
#define all(v) v.begin(),v.end()
#define ms(v) memset(v,0,sizeof(v))
#define FOR(i,a,b)  for(i=a;i<b;i++)
#define f_in(st) freopen(st,"r",stdin)
#define f_out(st) freopen(st,"w",stdout)
#define PIE 3.14159265358979323846264338327950
#ifdef ONLINE_JUDGE
 inline void inp1( int &n )
 {
    n=0;
    int ch=getchar_unlocked();int sign=1;
    while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getchar_unlocked();}
    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getchar_unlocked();
    n=n*sign;
  }
#else
inline void inp1(int &n){
 cin>>n;
}
#endif
//FILE *inp=fopen("in7.txt","r");
//FILE *oup=fopen("out7.txt","w");
struct node{
	int L,R,X,I;
};
vector<node> qty;
int N;
bool compare(const node &a,const node &b)
{
	if(a.L/N==b.L/N)
	{
		return a.R<b.R;
	}
	return a.L<b.L;
}
VI arr;
class Trie{
  private:
   Trie * child[2];
   int count;
   int freqq;
  public:
  Trie(){child[1]=child[0]=NULL;count=0;}
  void initialise(int n,int bit){
    count=0;
    if(bit<0)
    return ;
    bool b=(n&(1<<bit));
    if(child[b]==NULL) child[b]=new Trie();
    child[b]->initialise(n,bit-1);
  }
  void insert(int n,int bit){
    ++count;
    if(bit<0)
    return ;
    bool b=(n&(1<<bit));
    child[b]->insert(n,bit-1);
  }
  void remove(int n,int bit)
  {
    --count;
    if(bit<0) return;
    bool b=(n&(1<<bit));
    child[b]->remove(n,bit-1);
  }
  PII _search(int n,int bit)
  {
      PII temp;
      if(bit<0){temp.ft=0;temp.sd=count; return temp;}
      bool b=(n&(1<<bit));
      if(child[b]!=NULL&&child[b]->count>0)
      {
        temp=child[b]->_search(n,bit-1);
        temp.ft+=(b*(1<<bit));
      }
      else
      {
        temp=child[1-b]->_search(n,bit-1);
        temp.ft+=((1-b)*(1<<bit));
      }
      return temp;
  }
  void print_T()
  {
     if(child[0]!=NULL&&child[0]->count>0)
      {
       print(0);
       child[0]->print_T();
      }
      else if(child[1]!=NULL&&child[1]->count>0){
       print(1);
       child[1]->print_T();
      }
  }
}*root;
bool cmp(const pair<int,PII > &a,const pair<int,PII > &b){ return a.ft<b.ft;}
vector<pair<int,PII > > ans;

int subset[100001][101];

void isSubsetSum(vector<int> set, int n, int sum)
{
    for (int i = 0; i <= n; i++)
      subset[0][i] = 1;
    for (int i = 1; i <= sum; i++)
      subset[i][0] = 0;

     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] + subset[i - set[j-1]][j-1];
       }
     }

}

int main()
{

	{
		int n;
		scanf("%d",&n);
        arr.resize(n);
		for(int i=0;i<n;i++) scanf("%d",&arr[i]);

		isSubsetSum(arr,n,n*700);
        arr.clear();
		root=new Trie();
		int xxx = 0;
		for(int i = 1 ; i<=n*700; i++)
        {
            if(subset[i][n]>0)
            {   root->initialise(i,20);
                while((subset[i][n]>0))
                {
                    arr.push_back( i );
                    xxx++;
                    subset[i][n]--;
                }

            }
        }

        N = (int)sqrt(xxx);

        int Q;
		scanf("%d",&Q);
		qty.resize(Q);
        ans.resize(Q);
		for(int i=0;i<Q;i++)
		{
			int l,r,x;
			scanf("%d",&x);
			qty[i].L=0;
			qty[i].R=xxx-1;
			qty[i].X=x;
			qty[i].I=i;
		}
		sort(all(qty),compare); // compare function using sqrt decomposition
        int left=0,right=-1;
		for(int i=0;i<Q;i++)
		{
            while(right<qty[i].R)
            {
             right++;
             root->insert(arr[right],20);
            }
            while(qty[i].R<right)
            {
                root->remove(arr[right],20);
                right--;
            }
            while(qty[i].L<left)
            {
                left--;
                root->insert(arr[left],20);
            }
            while(left<qty[i].L)
            {
             root->remove(arr[left],20);
             left++;
            }
            ans[i].ft=qty[i].I;
            ans[i].sd=root->_search(qty[i].X,20);
		}
        sort(all(ans));
		for(int i=0;i<Q;i++) printf("%d %d\n",ans[i].sd.ft,ans[i].sd.sd);
		qty.clear();
	}
	return 0;
}

