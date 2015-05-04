#include<iostream>
using namespace std;
main()
{
long long t,n,m,x,n1,m1;
cin>>t;
while(t--)
{
    n1=m1=0;
cin>>n>>m;
while(n--)
{
cin>>x;
n1=max(x,n1);
}
while(m--)
{
    cin>>x;
    m1=max(x,m1);
}
if(n1>=m1)cout<<"Godzilla"<<endl;
else cout<<"MechaGodzilla"<<endl;
}

}
