#include<iostream>
using namespace std;
main()
{
    long long n,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(y==0)cout<<"Airborne wins."<<endl;
        else cout<<"Pagfloyd wins."<<endl;
    }
}
