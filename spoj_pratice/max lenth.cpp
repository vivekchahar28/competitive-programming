
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
main()
{
double n;
long t,i;
cin>>t;
for(i=1;i<=t;i++)
{
    cin>>n;
    n=4*n*n;
    n+=0.25000;
    cout<<"Case "<<i<<": ";
     printf("%llf\n",n);
}

}
