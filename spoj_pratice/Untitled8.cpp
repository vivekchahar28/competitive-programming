#include<iostream>
using namespace std;
 long long int call( long long int a, long long int b)
{
     long long int res;
    if(b==1)
        return a;
    res=call(a,b/2);
    res=(res*res)%10;
    if(b%2)
    res=(res*a)%10;
    return res;
}
main()
{
long long t,x,y;
cin>>t;
while(t--)
{
cin>>x>>y;
if(y==0)cout<<1<<endl;
else cout<<call(x,y)%10<<endl;
}

}


