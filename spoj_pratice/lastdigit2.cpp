#include<iostream>
#include<cstring>
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
char s[10000];
cin>>t;
while(t--)
{
cin>>s;
x=strlen(s);
x=s[x-1]-'0';
//cout<<x;
cin>>y;
if(y==0)cout<<1<<endl;
else cout<<call(x,y)%10<<endl;
}

}



