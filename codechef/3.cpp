#include<bits/stdc++.h>
using namespace std;
long long power(long long a,long long b)
{
    long long res;
    if(b==1)return a;
    res=power(a,b/2);
    res=(res*res)%1000000007;
    if(b%2)
    res=(res*a)%1000000007;
    return res;
}
long long comb(long long n,long long k)
{
    long long ans=1,p=1;
    if(k>n||k<0)return 0;
    else if(k==0)return 1;
    else if(k==1)return n;
   for(long long i=0;i<k;i++)
   {
       ans=ans*n;
       ans%=1000000007;
       n--;
   }
   ans=ans*301388891;
   ans%=1000000007;
   return ans;
}
main()
{
    long long n,k;
    cin>>n;
    if(n%2)n=(n+1)/2;
    else n=n/2;
    n=n-1;
    cout<<comb(n,6)<<endl;
}
