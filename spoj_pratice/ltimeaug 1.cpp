#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
main()
{
long t,h;
char s[1000000],s1[1000000];
cin>>t;
while(t--)
{
cin>>s;
strcpy(s1,s);
h=strlen(s);
reverse(s1,s1+h);
if(strcmp(s1,s)==0)
cout<<1<<endl;
else cout<<2<<endl;
}
}
