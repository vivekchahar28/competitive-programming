#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
main()
{
int t;
cin>>t;
while(t--)
{
double a[4],x=1.00000,y=0;
for(int i=0;i<4;i++){cin>>a[i];y+=a[i];}
y/=2;
for(int i=0;i<4;i++)
{
    x*=(y-a[i]);
   // cout<<x<<endl;
}
x=sqrt(x);
printf("%lf\n",x);
}
}
