#include<iostream>
using namespace std;
main()
{
long long sum=0,n,i;
cin>>n;
while(n)
{sum=0;
for(i=1;i<=n;i++)
{sum+=i*i;
}
cout<<sum<<endl;
cin>>n;
}
}
