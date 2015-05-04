#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
#define mp(n,m) make_pair(n,m)
 pair<L,L> p[3002];
vector<pair<pair<L,L>,L> > ans;
vector<pair<L,L> >points;
  L n,m,k,i,j,l;
L mat[102][102],temp[102][102];
void solve()
{

}


main()
{
    std::ios::sync_with_stdio(false);
    cin>>n>>m>>k;
    srand(2);
    for(i=0;i<k;i++)
    {
        cin>>p[i].F>>p[i].S;
        mat[p[i].F][p[i].S]=1;
        temp[p[i].F][p[i].S]=1;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(mat[i][j]==0)
           {
               vector.PB(mp(i,j));
           }
        }
    }
    solve();
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].F.F<<" "<<ans[i].F.S<<" "<<ans[i].S<<endl;
    }
}
