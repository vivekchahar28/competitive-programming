#include<bits/stdc++.h>
using namespace std;
#define L int
#define FOR(i,n) for(i=1;i<=n;i++)
#define SIZE 2
#define PB(n) push_back(n)
L pow2[32];
void pow_fn()
{
    pow2[31]=1;
    for(int i=30;i>=0;i--)
    {
        pow2[i]=2*pow2[i+1];
    }
}
class trie
{
        int isleaf;
        trie* child[SIZE];
        public:
            trie()
            {
                isleaf=0;
                for(int i = 0 ; i < SIZE ;i++)
                {
                    child[i]=NULL;
                }
            }
            void insert(trie* node,vector<int> value)
            {
             for(int i = 0 ; i < value.size(); i++ )
             {
                if(node->child[value[i]])
                {
                    node=node->child[value[i]];
                }
                else
                {
                    node->child[value[i]]=new trie;
                    node=node->child[value[i]];
                }
             }
        }
            vector<int> querry(trie* node,vector<int> value)
            {
                vector<int> result;
                for(int i = 0 ; i < value.size() ; i++ )
                {

                        int pos=!(value[i]);
                        int pos1=value[i];
                            if(node->child[pos])
                            {
                                   result.PB(1);
                                node=node->child[pos];
                            }
                            else
                            {
                                    if(node->child[pos1])
                                    {
                                        result.PB(0);
                                        node=node->child[pos1];
                                    }
                            }
                    }
                    return result;
                }

            };

main()
{
    pow_fn();

L t,n,a[100004],i;
cin>>t;
while(t--)
{
    cin>>n;
    FOR(i,n)
    {
        scanf("%lld",&a[i]);
    }
    L ans=0,pre=0,temp,j;
    trie* root=new trie;
    FOR(i,n)
    {
        pre=pre^a[i];
        temp=pre;
        vector<int> v;
        for(j=0;j<32;j++)
        {
            v.PB(pre%2);
            pre/=2;
        }
        reverse(v.begin(),v.end());
        root->insert(root,v);
        v=root->querry(root,v);
        L num=0;
        for(j=0;j<v.size();j++)
        {
            num+=v[j]*pow2[j];
        }
        ans=max(ans,max(num,temp));
      pre=temp;
    }
    printf("%lld\n",ans);
    }



}
