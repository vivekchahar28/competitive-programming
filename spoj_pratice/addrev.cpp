#include<iostream>
using namespace std;
main()
{
    long long n,l,l1,l2,l3,r;
    cin>>n;
    while(n--)
    {
        cin>>l>>l1;
    l2=l3=0;
    while(l)
    {
    l2*=10;
        r=l%10;
        l2+=r;
        l/=10;

    }

     while(l1)
    {    l3*=10;
        r=l1%10;
        l3+=r;
        l1/=10;
    }
        l2=l2+l3;
        l1=l2;
        l3=0;
        while(l1)
    {   l3*=10;
        r=l1%10;
        l3+=r;

        l1/=10;
    }
    cout<<l3<<endl;
    }
}
