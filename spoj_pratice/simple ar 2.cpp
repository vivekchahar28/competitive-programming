#include<string>
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
main()
{
long long t,a1,b1,i;
char s[1000000],ch;
string a,b;
cin>>t;
gets(s);
while(t--)
{a.clear();
b.clear();
   gets(s);
    gets(s);
    for(i=0;s[i]!=' ';i++)
    {
        a.push_back(s[i]);
    }
    a1=atoi(a.c_str());
    while(s[i]==' ')i++;
    ch=s[i];
    i++;
     while(s[i]==' ')i++;
    for(i;s[i]!=' ';i++)
    {
        b.push_back(s[i]);
    }
    b1=atoi(b.c_str());
     while(s[i]==' ')i++;
    if(ch=='+')b1=a1+b1;
    if(ch=='-')b1=a1-b1;
    if(ch=='*')b1=b1*a1;
    if(ch=='/')b1=a1/b1;
    if(s[i]=='='){cout<<b1<<endl;continue;}
    while(1)
    {
        ch=s[i++];
       while(s[i]==' ')i++;
        a.clear();
        if(s[i]=='='||s[i]=='\0')break;
        while(s[i]==' ')i++;
        for(i;s[i]!=' ';i++)
    {
        a.push_back(s[i]);
    }
    a1=atoi(a.c_str());
    if(ch=='+')b1=a1+b1;
    if(ch=='-')b1=b1-a1;
    if(ch=='*')b1=b1*a1;
    if(ch=='/')b1=b1/a1;
    while(s[i]==' ')i++;
    }
    cout<<b1<<endl;
}
}
