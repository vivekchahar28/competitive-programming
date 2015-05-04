#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
#define mp(n,m) make_pair(n,m)
L mat[102][102],temp[102][102];
vector<pair<L,L> > v;
main()
{
    std::ios::sync_with_stdio(false);
    L n,m,k,i,j,l;
    cin>>n>>m>>k;
    pair<L,L> p[3002];
    vector<pair<pair<L,L>,L> > ans;
    srand(2);
    for(i=0;i<k;i++)
    {
        cin>>p[i].F>>p[i].S;
        mat[p[i].F][p[i].S]=1;
        temp[p[i].F][p[i].S]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(mat[i][j]==0)
            {
                v.push_back(mp(i,j));
            }
        }
    }
    L u_sz=INT_MAX;
    vector<pair<pair<L,L>,L> > u_ans;
    for(L x=0;x<40;x++)
    {
        int check=0,c=0;
        while(1)
        {
            int pos=rand()%v.size();
                i=v[pos].F;
                j=v[pos].S;
                check=rand()%2;
                ans.push_back(mp(mp(i,j),check));
                if(check==0)
                {
                    for(l=j;l>0;l--)
                    {
                        if(mat[i][l]==1)
                        break;
                        mat[i][l]=1;
                    }
                    for(l=j+1;l<=n;l++)
                    {
                        if(mat[i][l]==1)
                        break;
                        mat[i][l]=1;
                    }
                }
                else
                {
                   for(k=i;k>=1;k--)
                    {
                        if(mat[k][j]==1)
                        break;
                        mat[k][j]=1;
                    }
                    for(k=i+1;k<=n;k++)
                    {
                        if(mat[k][j]==1)
                        break;
                        mat[k][j]=1;
                    }
                }
            v.clear();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(mat[i][j]==0)
            {
                v.push_back(mp(i,j));
            }
        }
    }
    if(v.size()==0)
        break;
        }
        if(u_sz>ans.size())
        {
            u_sz=ans.size();
            u_ans.clear();
            for(i=0;i<ans.size();i++)
            {
             u_ans.push_back(ans[i])       ;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                mat[i][j]=temp[i][j];
                if(temp[i][j]==0)
                {
                    v.push_back(mp(i,j));
                }
            }
        }
        ans.clear();
    }


     /* for(L q=1;q<=n;q++,cout<<endl)
                for(L w=1;w<=m;w++)
            cout<<mat[q][w];*/
    cout<<u_ans.size()<<endl;
    for(i=0;i<u_ans.size();i++)
    {
        cout<<u_ans[i].F.F<<" "<<u_ans[i].F.S<<" "<<u_ans[i].S<<endl;
    }
}
