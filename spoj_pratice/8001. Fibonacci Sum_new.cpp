#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
    long long a[1000000],t,n,m,sum[1000000];


    //f(2*n-1)=f(n-1)*f(n-1)+f(n)
    // (2*f(n-1)+f(n))f(n)

long long fb(long long n)
{
    if(n<1000000)
        return a[n];

    if(n%2)
    {
        long long x=(n+1)/2;
        long long var=fb(x-1),var1=fb(x);
        return ((var*var)%mod+(var1*var1)%mod)%mod;
    }
    else
    {
        long long x=n/2;
        long long var=fb(x-1),var1=fb(x);
        return ((((2*var)%mod+var1)%mod)*var1)%mod;
    }
}
main()
{
    a[0]=1;
    a[1]=1;
    for(int i=2;i<1000000;i++)
        {
            a[i]=(a[i-1]+a[i-2])%mod;
        }
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a=fb(n),b=fb(n+1);
            cout<<"$"<<(a*b-1+mod)%mod<<endl;;
    }

}
