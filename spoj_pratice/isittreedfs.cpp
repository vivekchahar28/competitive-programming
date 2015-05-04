#include<iostream>
#include<vector>
using namespace std;
long long vis[100000]={0},height[100000]={0};
vector<vector<long long > > v(100000);
void dfs(long long vi)
{
    vis[vi]=1;
    for(long long i=0;i<v[vi].size();i++)
        {
            if(!vis[v[vi][i]])
               {
                height[v[vi][i]]=max(height[v[vi][i]],height[vi]+1);
                dfs(v[vi][i]);
            }
            }
            }
main()
{
long long n,m,i,x,y,c,c1;
cin>>n;
m=n-1;
for(i=1;i<=m;i++)
{
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
}
dfs(1);
c=0;
long long pos=0;
for(i=0;i<100000;i++){if(height[i]>c){
    c=height[i];
    pos=i;
} height[i]=vis[i]=0;
}
dfs(pos);
c=0;
for(i=0;i<100000;i++)c=max(c,height[i]);
cout<<c<<endl;
return 0;
}
