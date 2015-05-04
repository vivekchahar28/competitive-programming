#include<bits/stdc++.h>
using namespace std;
#define L long long
L dp[100][1000];
int count(L n, L k)
{
	if(n == 0)
		return 0;
	if(k == 0)
		return 1;
	if(dp[n][k] != -1)
		return dp[n][k];
	L val = 0;
	for(L i = 0; i < n && k-i >= 0; i++)
		val += count(n-1,k-i);
	return (dp[n][k] = val);
}
main()
{
   L t,n,k,i,j;
   for(i=0;i<100;i++)
    {
        for(j=0;j<1000;j++)
        {
            dp[i][j]=-1;
        }
    }
   cin>>t;

   while(t--)
   {
       cin>>n>>k;
       cout<<count(n,k)<<endl;

   }
}
