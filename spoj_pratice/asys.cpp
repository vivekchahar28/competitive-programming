#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
main()
{
long long t,a,b,c,f,i;
char s[1000000];
string s1,s2,s3;
cin>>t;
gets(s);
while(t--)
{gets(s);
    a=b=c=-1;
gets(s);
s1.clear();
s2.clear();
s3.clear();
f=0;
for(i=0;s[i]!=' ';i++)
{
if(s[i]=='m')f=1;
s1.push_back(s[i]);
}
if(f==0)
{
    a=atoi(s1.c_str());
    //cout<<a<<endl;
}

i+=3;
f=0;
for(;s[i]!=' ';i++)
{
if(s[i]=='m')f=1;
s2.push_back(s[i]);
}
if(f==0)
{
    b=atoi(s2.c_str());
}
i+=3;
f=0;
for(;;i++)
{
    if(s[i]=='\0'||s[i]=='\n')break;
if(s[i]=='m')f=1;
s3.push_back(s[i]);
}
if(f==0)
{
    c=atoi(s3.c_str());
}
if(a!=-1)
{
    cout<<a<<" + ";
}
else{
    cout<<c-b<<" + ";
}
if(b!=-1)
{
    cout<<b<<" = ";
}else cout<<c-a<<" = ";
if(c!=-1)
{
    cout<<c<<endl;
}
else cout<<a+b<<endl;
}
return 0;
}

