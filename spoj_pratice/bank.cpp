#include<iostream>
#include<map>
using namespace std;
main()
{      
   
      long t,n,k,i;
     char s[55];
     string s1;
      cin>>t;
  map<string,int> m;
      map<string,int>::iterator it;
      while(t--)
      {    
             
                cin>>n;
                gets(s);
                while(n--)
                {
                gets(s);
                for(i=0;s[i];i++)
                {
                s1.push_back(s[i]);
                }
                s1.push_back('\0');
                m[s1]++;
                s1.clear();
                }
                
              for(it=m.begin();it!=m.end();it++)
                {
                printf("%s %d\n",it->first.c_str(),it->second);
                         }
                         m.clear();
                         }
                         return 0;
                         }                       
                
      
      
