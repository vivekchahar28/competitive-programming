#include<iostream>
#include<algorithm>
using namespace std;
main()
{
long long t,k,n,a[10002],i,p,j;
cin>>t;
for(j=1;j<=t;j++)
{
cin>>k>>n;
for(i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
p=0;
for(i=n-1;i>=0;i--)
{
k-=a[i];
p++;
if(k<=0)break;
}
cout<<"Scenario #"<<j<<":"<<endl;
if(k<=0)
cout<<p<<endl<<endl;
else cout<<"impossible"<<endl<<endl;
}
}
