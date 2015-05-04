#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int> > v(10002);
vector<int> h(10002);
int vis[10002]={0};
void dfs(int vertex,int height)
{
    vis[vertex]=1;
    h[vertex]=height;
    for(int i=0;i<v[vertex].size();i++)
        if(!vis[v[vertex][i]])  dfs(v[vertex][i],height+1);
}

main()
{
    int t,n,x,y,i;
    cin>>t;
    while(t--)
    {for(i=0;i<10001;i++){v[i].clear();}
        cin>>n;
        h.resize(n+1);
        fill(h.begin(),h.end(),0);
        for(i=0;i<n-1;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
        }
        for(i=0;i<10002;i++){vis[i]=0;}
        h[1]=1;
        dfs(1,1);
    sort(h.begin(),h.end());
    int var=1,j=h.size()-1,c=0;
   /* for(i=0;i<j+1;i++)
        cout<<h[i]<<" ";
    cout<<endl<<endl;*/
    for(i=1;i<=j;)
    {//cout<<i<<" "<<j<<endl;
        while(i<=j&&h[i]==var)i++;
        c++;
        if(h[j] == var)
            break;
        var++;
        j--;c++;

    }

        cout<<c<<endl;
    }
    return 0;
}
