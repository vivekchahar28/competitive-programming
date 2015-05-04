#include<bits/stdc++.h>
using namespace std;
int mod;
    long long a[1000000],t,n,m;
long long fb(long long n)
{
    if(n==0)
        return 0;
        if(n==1)
        return 1;

    if(n%2)
    {
        long long x=(n+1)/2;
        long long var=fb(x-1),var1=fb(x);
        return (((var*var)%mod+(var1*var1)%mod)%mod+(2*n-2))%mod;
    }
    else
    {
        long long x=n/2;
        long long var=fb(x-1),var1=fb(x);
        return (((((2*var)%mod+var1)%mod)*var1)%mod+(2*n-1))%mod;
    }
}
main()
{
    a[0]=0;
    a[1]=1;
    cin>>t;
    mod=10000007;
    while(t--)
    {
        cin>>n;
        long long a=fb(n);
            cout<<a<<endl;
    }

}
