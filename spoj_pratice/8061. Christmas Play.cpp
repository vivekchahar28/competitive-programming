#include<iostream>
#include<queue>
#include<limits.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
main()
{
long long t,arr[100000];
scanf("%lld",&t);
while(t--)
{

long long n,k,x,i,min1=LONG_MAX;
scanf("%lld%lld",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%lld",&arr[i]);
}
sort(arr,arr+n);
for(i=k-1;i<n;i++)
{min1=min(min1,arr[i]-arr[i-k+1]);
//cout<<arr[i]-arr[i-k+1]<<endl;
}
cout<<min1<<endl;
}
}
