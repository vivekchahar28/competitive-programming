#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  char ch;
  scanf("%*c",&ch);
  char s[111];
  string str;
  while(n--)
    {
       gets(s);
      getline(cin,str);
      char oper;
      int i=0;
      long long num=0,ans=0;
      for(;i<str.length()&&str.at(i)>='0'&&str.at(i)<='9';i++)
        {
          num*=10;
          num+=(str.at(i)-'0');
        }
      ans=num;

      for(;i<str.length();)
        {

          num=0;
          i++;
          oper=str.at(i);
          if(oper=='=')
            break;
          i+=2;

          for(;str.at(i)>='0'&&str.at(i)<='9';i++)
            {
              num*=10;
              num+=(str.at(i)-'0');
            }

          switch(oper)
            {
            case '+' : ans=ans+num;
              break;
            case '*': ans=ans*num;
              break;
            case '-': ans=ans-num;
              break;
            case '/' : ans=ans/num;
              break;
            }

        }
      cout<<ans<<endl;
    }
}
