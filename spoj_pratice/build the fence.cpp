#include<stdio.h>
#include<iostream>
#define pi 3.1415926
using namespace std;
main()
{
    double n;
    cin>>n;
    while(n)
    {
        printf("%.2lf\n",((double)n*n)/(double)((double)(pi)*(double)(2)));
        cin>>n;
    }


}
