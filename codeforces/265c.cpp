#include<iostream>
using namespace std;
main()
{
    char ch;
int n,p,i,f=0;
cin>>n>>p;
string s;
cin>>s;
for(i=s.size()-1;i>=0;)
    {
    if(s[i]-'a'==p-1)
    {
            i--;
    }
    else
    {
         ch=s[i]+1;
        if(i>0)
        {
            while(ch-'a'!=p-1)
            {
                if(s[i-1]!=ch)
                {
                if(i>1&&s[i-2]!=ch)
                {
                    break;
                    f=1;
                }
                if(i==1)
                {
                    f=1;
                    break;
                }
            }
            ch++;
        }
    }
    else
        {
        break;
    }
}
if(f)
break;
else i--;
    }
    int df=s.size()-1-i;
    if(df>(p-1))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int st=0,j;
        for(j=0;j<i;j++)
            cout<<s[j];
        cout<<ch;
        if(ch!='a')
        {
            if(s[i-1]!='a')
            {
                st=0;
            }
        }
        else if(ch!='b')
        {
            if(s[i-1]!='b')
            {
                st=1;
            }
        }
      else if(ch!='c')
        {
            if(s[i-1]!='c')
            {
                st=2;
            }
        }
    if(st==0)
        for(j=i+1;j<s.size()-2;j++)
        cout<<"abc";
        else if(st==1)
        for(j=i+1;j<s.size()-2;j++)
        cout<<"bac";
    else for(j=i+1;j<s.size()-2;j++)
        cout<<"cab";
    }
    }
