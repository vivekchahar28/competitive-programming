#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <math.h>
#include <ctime>
using namespace std;
main()
{
      char s[10000],temp[10000];;
      int n,x,y,sum,c,count,i,count1,a[26];
      char *st;
      cin>>s;
      cin>>n;
      while(n--)
      {sum=0;
      count1=0;
      cin>>x>>y;
      if(x==1)
      {for(i=0;i<26;i++)a[i]=0;
              for(i=0;s[i];i++)a[s[i]-'a']++;
              for(i=0;i<26;i++)
              {if(a[i]==y)
              count1++;
              }
              }
       
            
       
              else
              {
      for(i=0;s[i];)
      {
                       c=0;
      while(c<x)
      {
      temp[c++]=s[i++];
      }
      temp[c]='\0';
      st=s;
      while(st=strstr(st,temp))
      {count++;
      st+=y;
}                         
if(count==y)count1++;
      }
      }
      cout<<count1<<endl;
      }
      return 0;
      }
      
      
      
