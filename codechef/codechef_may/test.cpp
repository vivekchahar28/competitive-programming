#include<iostream>
#include<map>
using namespace std;
main()
{
      char s[20];
map<char*,int> m;
map<char*,int>::iterator it;
m["vivek"]=1;
m["bag"]=1;
m["bag"]++;
m["32"]=1;
while(1)
{cin>>s;
              for(it=m.begin();it!=m.end();it++)
              {if(strcmp(it->first,s)==0)cout<<it->second;}
                                    }
                                    getchar();
                                    }
