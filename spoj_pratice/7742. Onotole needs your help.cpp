#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
long long n,x,v=0;
scanf("%lld",&n);
while(n--)
{
scanf("%lld",&x);
v^=x;
}
cout<<v<<endl;
}
