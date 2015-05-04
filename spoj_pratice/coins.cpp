#include<stdio.h>
#include<iostream>
using namespace std;
long long arr[10000000],sum=0,n,i;
long long fn(long long n)
{
    if(n<10000000)return arr[n];
    return max(n,fn(n/2)+fn(n/3)+fn(n/4));
}

main()
{
    for(i=0;i<11;i++)arr[i]=i;
for(;i<10000000;i++)arr[i]=max(i,(arr[i/2]+arr[i/3]+arr[i/4]));
 while(scanf("%lld",&n)!=EOF)
 {
 cout<<fn(n)<<endl;
}
return 0;
}
