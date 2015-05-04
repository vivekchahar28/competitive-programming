#include<iostream>
using namespace std;
main()
{
long t,n,k;
scanf("%ld",&t);
while(t--)
{
    scanf("%ld",&n,&k);
        if((k+2)>n)printf("Rani\n");
        else
        {
        n=n-k-2;
        n%=(k+1);
        if(n==0)printf("Nandu\n");
        else printf("Rani\n")
        }
}
}
