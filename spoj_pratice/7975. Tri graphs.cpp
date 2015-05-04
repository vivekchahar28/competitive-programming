#include<bits/stdc++.h>
using namespace std;
#define L long long
    L tc=0,n,i,a[1000000][5],ans[1000000][5];
main()
{
    while(1)
    {
    cin>>n;
    if(n==0)
    break;
    tc++;
    for(i=1;i<=n;i++)
        cin>>a[i][1]>>a[i][2]>>a[i][3];
    for(i=1;i<n+2;i++)
    {
        ans[i][0]=INT_MAX;
        ans[i][4]=INT_MAX;
    }
    ans[1][1]=ans[1][2]=a[1][2];
    ans[1][3]=a[1][3]+a[1][2];
    for(i=2;i<=n;i++)
    {
        ans[i][1]=a[i][1]+min(ans[i-1][1],ans[i-1][2]);
        ans[i][2]=a[i][2]+min(ans[i][1],min(ans[i-1][1],min(ans[i-1][2],ans[i-1][3])));
        ans[i][3]=a[i][3]+min(ans[i-1][2],min(ans[i][2],ans[i-1][3]));
    //    cout<<ans[i][1]<<" "<<ans[i][2]<<" "<<ans[i][3]<<endl;
    }
    cout<<tc<<". "<<ans[i-1][2]<<endl;

}
}
