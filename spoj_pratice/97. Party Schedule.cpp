#include<bits/stdc++.h>
using namespace std;
#define L long long
L global;


L knap(L weight[],L val[],L W,L n)
{
    L ans[n+1][W+1],i,j;
    L ans1[n+1][W+1];
    for(i=0;i<=n;i++)
    {
        for(L j=0;j<=W;j++)
        {
            if(i==0||j==0)
                {
                    ans[i][j]=0;
                    ans1[i][j]=0;
                }
                else if(weight[i-1]<=j)
                {
                if((val[i-1]+ans[i-1][j-weight[i-1]])>ans[i-1][j])
                {
                    ans1[i][j]=ans1[i-1][j-weight[i-1]]+weight[i-1];
                    ans[i][j]=val[i-1]+ans[i-1][j-weight[i-1]];
                }
                else if((val[i-1]+ans[i-1][j-weight[i-1]])<ans[i-1][j])
                {
                    ans1[i][j]=ans1[i-1][j];
                    ans[i][j]=ans[i-1][j];
                }
                else
                {
                    ans[i][j]=ans[i-1][j];
                    ans1[i][j]=min((ans1[i-1][j-weight[i-1]]+weight[i-1]),ans1[i-1][j]);
                }
            }
            else {
                    ans1[i][j]=ans1[i-1][j];
                    ans[i][j]=ans[i-1][j];
                }
        }
    }
    global=ans1[n][W];
    return ans[n][W];
}
main()
{

    L n,k,i;
    while(1)
    {
        cin>>k>>n;
        if(n==0&&k==0)
            break;
            L val[n],w[n];
        for(i=0;i<n;i++)
        {
            cin>>w[i]>>val[i];
        }
        cout<<global<<" "<<knap(w,val,k, n)<<endl;
    }

}
