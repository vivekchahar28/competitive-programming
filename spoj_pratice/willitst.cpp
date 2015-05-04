#include<iostream>
using namespace std;
main()
{
long long n,f=1;
cin>>n;
while(f<=n)
    f=f*2;
    f=f/2;
if(f==n)cout<<"TAK"<<endl;
else
cout<<"NIE"<<endl;

}
