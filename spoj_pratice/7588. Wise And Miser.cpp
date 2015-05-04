#include<bits/stdc++.h>
using namespace std;
#define L int
L n,m,i,j,a[101][101],b[102][102];
main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    for(j=1;j<=m;j++)
        b[1][j]=a[1][j];
        for(i=0;i<=n;i++)
            b[i][0]=b[i][m+1]=INT_MAX;
    for(i=2;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                b[i][j]=a[i][j]+min(b[i-1][j],min(b[i-1][j-1],b[i-1][j+1]));
            }
        }
   /*     for(i=1;i<=n;i++,cout<<endl)
        for(j=1;j<=m;j++,cout<<" ")
            cout<<b[i][j];*/
        L ans=INT_MAX;
        for(j=1;j<=m;j++)
            ans=min(b[n][j],ans);
            cout<<ans<<endl;
}
