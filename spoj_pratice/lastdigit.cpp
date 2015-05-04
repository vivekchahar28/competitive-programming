#include<iostream>
using namespace std;
main()
{
long long t,x,y,ld,c,r,p,i;
cin>>t;
while(t--)
{
cin>>x>>y;
if(x==0){cout<<0<<endl;continue;}
else if(y==0){cout<<1<<endl;continue;}
else{
p=x;
ld=x%10;
c=0;
while(1)
{
p*=x;
r=p%10;
c++;
//cout<<p<<endl;;
if(r==ld||y<c)break;
}
//cout<<c;
y%=c;
p=x;
for(i=1;i<y;i++)
   {p*=x;}
   cout<<p%10<<endl;
}
}
}
