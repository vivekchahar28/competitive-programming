#include<iostream>
#include<queue>
#include<stdio.h>
#include<climits>
using namespace std;
    pair<long long,long long> p1;
  string s;
long long n,m,t,arr[200][200],mat[200][200],i,j,x,y;
queue<pair<long long,long long> > q;
main()
{
char s1[8];
cin>>t;

while(t--)
{
  while(!q.empty())q.pop();
    s.clear();
    cin>>n>>m;gets(s1);
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<=m;j++)
        {
            arr[i][j]=s[j]-'0';
            if(arr[i][j]==1)
            {   p1.first=i;
            p1.second=j;
q.push(p1);
mat[i][j]=0;
        }
        else mat[i][j]=INT_MAX;
    }
}
while(!q.empty())
{
    x=q.front().first;
    y=q.front().second;
    q.pop();
    if((x)>0&&mat[x-1][y]==INT_MAX)
    {
        mat[x-1][y]=mat[x][y]+1;
        p1.first=x-1;
        p1.second=y;
        q.push(p1);
    }
    if((y)>0&&mat[x][y-1]==INT_MAX)
    {
        mat[x][y-1]=mat[x][y]+1;
        p1.first=x;
        p1.second=y-1;
        q.push(p1);
    }
    if((x+1)<n&&mat[x+1][y]==INT_MAX)
    {
        mat[x+1][y]=mat[x][y]+1;
        p1.first=x+1;
        p1.second=y;
        q.push(p1);
    }
    if((y+1)<n&&mat[x][y+1]==INT_MAX)
    {
        mat[x][y+1]=mat[x][y]+1;
        p1.first=x;
        p1.second=y+1;
        q.push(p1);
    }
}

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        cout<<mat[i][j];
        if(j==m-1)cout<<endl;
        else cout<<" ";

    }
}
}
return 0;
}
