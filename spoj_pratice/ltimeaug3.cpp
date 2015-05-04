#include<iostream>
#include<vector>
#include<queue>
using namespace std;
main()
{
int t;
cin>>t;
while(t--)
{
    int n,i,j,q;
    cin>>n;
    vector<vector<char> > g(n,vector<char>(n));
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>g[i][j];
        cin>>q;
        while(q--)
        {

        int v,m;
        cin>>v>>m;
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            if(g[a][b]=='1')g[a][b]='0';
            else g[a][b]='1';
        }
        v--;
        vector<int> h(n,-1);
        queue<int> q;
        q.push(v);
        h[v]=0;
        int counter=0;
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
           for(int i=0;i<n;i++)
            {if(g[cur][i]=='1'&&h[i]==-1)
           {
               h[i]=h[cur]+1;
               counter+=h[i];q.push(i);
           }
            }

        }

    cout<<counter<<endl;
}}


}
