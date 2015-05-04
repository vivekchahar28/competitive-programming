#include<iostream>
using namespace std;
main()
{
long long n,arr[100000],sum,sum1,i;
cin>>n;
while(n!=-1)
{sum1=0;
sum=0;
for(i=0;i<n;i++){cin>>arr[i];sum+=arr[i];}
if((sum%n)!=0){cout<<-1<<endl;}
else{sum/=n;
for(i=0;i<n;i++){
if(arr[i]>sum)
sum1+=arr[i]-sum;
}
cout<<sum1<<endl;
}
cin>>n;
}
}
