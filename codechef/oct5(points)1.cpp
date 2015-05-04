#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
#define mp(n,m) make_pair(n,m)
L mat[102][102];
main()
{
    std::ios::sync_with_stdio(false);
    L n,m,k,i,j,l;
    cin>>n>>m>>k;
    pair<L,L> p[3002];
    vector<pair<L,L> > ans;
    for(i=0;i<k;i++)
    {
        cin>>p[i].F>>p[i].S;
        mat[p[i].F][p[i].S]=1;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(mat[j][i]==0)
            {
                ans.push_back(mp(j,i));
                    for(l=j;l<=n;l++)
                    {
                        if(mat[l][i]==1)
                        break;
                        mat[l][i]=1;
                    }
            }
          /*  for(L q=1;q<=n;q++,cout<<endl)
                for(L w=1;w<=m;w++)
            cout<<mat[q][w];
            char ch;
            cin>>ch;*/
        }
    }
   /*  for(L q=1;q<=n;q++,cout<<endl)
                for(L w=1;w<=m;w++)
            cout<<mat[q][w];*/
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].F<<" "<<ans[i].S<<" "<<1<<endl;
    }
}
