#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
long long n,ans=1,x=0,y=0,z=0,a,b;
char ch[4000],ch1;
cin>>n;
while(n--)
{
cin>>a>>ch1>>b;
if(a==1&&b==2)x++;
if(a==1&&b==4)y++;
if(a==3)z++;
}

ans+=z;
ans+=(x%2)?((x/2)+1):(x/2);
if(y>z)
{y-=z;
    if(x%2)y-=2;
    //cout<<ans;
    if(y>0)
    {long long p=y/4;
    y%=4;
    ans+=p;
    }
    if(y>0) ans++;
}
cout<<ans<<endl;
}
