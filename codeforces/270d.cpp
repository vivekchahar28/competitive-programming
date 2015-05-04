#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
main()
{
    L L t,n,i,j;
   cin>>n;
   L L a[n+1][n+1];
   FOR(i,n)
    FOR(j,n)
    cin>>a[i][j];
    L c=0;
    bool flag=0;
   FOR(i,n)
   {
       FOR(j,n)
       {
           if(a[i][j]!=a[j][i])
           {
                flag=1;
                break;
           }
           if(a[i][j]==0 && i!=j)
            {
                flag=1;
                break;
            }
       }
       if(flag)
        break;
   }
   if(flag)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    FOR(i,n)
    {
        for(j=i+1;j<=n;j++)
        {
            L L sum =a[1][i]+a[1][j];
            if(a[i][j]!=sum)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;



}
