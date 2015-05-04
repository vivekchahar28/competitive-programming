#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB(n) push_back(n)
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
#define mp(n,m) make_pair(n,m)
main()
{
    std::ios::sync_with_stdio(false);
    L t,n,k,tc,x,y,u,v,i;
    cin>>t;
    for(tc=1;tc<=t;tc++)
    {
        bool flag=0;
        cin>>n>>k;
        vector<vector<L> > graph(n+1);
        L arr[n+1];
        memset(arr,0,sizeof(arr));
        while(k--)
        {
            cin>>u>>v;
            graph[u].PB(v);
            graph[v].PB(u);
        }
        for(i=1;i<=n;i++)
        {
            if(arr[i]==0&&!flag)
            {

               queue<L> q;
               q.push(i);
               q.push(-1);
               arr[i]=1;
               int var=1;
               while(!q.empty())
               {
                   L t=q.front();
                   q.pop();
                   if(t==-1&&q.empty())
                   break;
                   else if(t==-1)
                   {
                       var=var==1?2:1;
                       continue;
                   }
                    else
                    {
                    if(arr[t]!=var&&arr[t]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                   arr[t]=var;
                   q.push(-1);
                for(i=0;i<graph[t].size();i++)
                {
                    q.push(graph[t][i]);
                }
               }


            }
        }


        if(flag)
            cout<<"Scenario #"<<tc<<":\nSuspicious bugs found!\n";
            else
            cout<<"Scenario #"<<tc<<":\nNo suspicious bugs found!\n";
    }
}
