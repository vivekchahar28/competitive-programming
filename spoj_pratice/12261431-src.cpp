#include<bits/stdc++.h>
#include<vector>
using namespace std;
int vis[100000]={0};
vector<vector<long long > > v(100000);
int arr[100000],p,q,k,i;
void dfs(int vi)
{
    vis[vi]=1;
    for( i=0;i<v[vi].size();i++)
        {
            if(!vis[v[vi][i]])
            {
                arr[v[vi][i]]=arr[vi]+1;
                dfs(v[vi][i]);
            }
            else
            {
        if(arr[v[vi][i]]-arr[vi]>=k)
            {
                p=v[vi][i];
                q=vi;
            }
            else if((arr[vi]-arr[v[vi][i]])>=k)
            {
                p=vi;
                q=v[vi][i];
            }
            }
        }
    }
int printdfs(int n)
{
    vis[n]=1;
    for(int i=0;i<v[n].size();i++)
        {
            if(v[n][i]==q)
            {   cout<<q<<" ";
            return 1;
            }
            if(!vis[v[n][i]])
            {
                int var=printdfs(v[n][i]);
                if(var==1)
                 {
                     cout<<n<<" ";
                     return 1;
                 }
            }
        }
            return 0;

        }
main()
{
long long n,m,i,x,y,c,c1;
cin>>n>>m>>k;
for(i=1;i<=m;i++)
{
    cin>>x>>y;
    v[x].push_back(y);
}
arr[1]=1;
dfs(1);
cout<<abs(arr[q]-arr[p]+1)<<endl;
for(i=0;i<100000;i++)
    vis[i]=0;
printdfs(p);
}
