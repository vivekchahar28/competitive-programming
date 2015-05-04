#include<bits/stdc++.h>
using namespace std;
#define L int
L vis[10000],dis[10000];
void dfs(L v,vector<vector<L> > graph)
{
    cout<<"v="<<v<<endl;
    vis[v]=1;
    for(L i=0;i<graph[v].size();i++)
    {
        if(vis[graph[v][i]]==0)
        {
            dis[graph[v][i]]=max(dis[graph[v][i]],dis[v]+1);
            dfs(graph[v][i],graph);
        }
    }
}
main()
{
    L t,r,c,i,j;
    cin>>t;
    while(t--)
    {
        L startwithx=0,startwithy=0;
        vector<vector<L> > graph(20000,vector<L> (2000,0));
        cin>>r>>c;
        for(i=1;i<=r;i++)
        {
            string ch;
            cin>>ch;
            for(j=0;j<c;j++)
        {
            if(ch[j]=='.')
            {
                graph[i][j+1]=1;
                startwithx=
            }
            else graph[i][j+1]=0;
        }
        }

        dfs(startwith,graph);
        L max_h=0,which_have=0;
        for(i=0;i<10000;i++)
        {
            if(dis[i]>max_h)
            {
                max_h=dis[i];
                which_have=i;
                cout<<"max_h="<<max_h<<endl;
                cout<<"i="<<i<<endl;
            }
            dis[i]=vis[i]=0;
        }
        dfs(which_have,graph);
        max_h=0;
        for(i=0;i<10000;i++)
        {
            if(dis[i]>max_h)
            max_h=dis[i];
        }
        cout<<"Maximum rope length is "<<max_h<<"."<<endl;
    }
}
