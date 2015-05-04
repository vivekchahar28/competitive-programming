#include<iostream>
using namespace std;
main()
{
long long t,n,sum;
cin>>t;
while(t--)
{
cin>>n;
sum=n*(n-1);
sum/=2;
sum%=1000007;
sum+=n*(n+1);
sum%=1000007;
cout<<sum<<endl;
}

}
