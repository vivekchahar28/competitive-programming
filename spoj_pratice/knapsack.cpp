#include<bits/stdc++.h>
using namespace std;
#define L int
main()
{
    L n,W,val[100],weight[100],i;

    cin>>W>>n;
    for(i=0;i<n;i++)
    {
        cin>>weight[i]>>val[i];
    }
    L ans[n+1][W+1];

    for(i=0;i<=n;i++)
    {
        //cout<<endl;
        for(L j=0;j<=W;j++)
        {
            if(i==0||j==0)
                ans[i][j]=0;
            else if(weight[i-1]<=j)
            {
                ans[i][j]=max(val[i-1]+ans[i-1][j-weight[i-1]],ans[i-1][j]);
            }
            else ans[i][j]=ans[i-1][j];
           // cout<<ans[i][j]<<" ";
        }
    }

    cout<<ans[n][W]<<endl;
}
