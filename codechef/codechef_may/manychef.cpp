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
      int t,l,i;
      char s[2014];
      cin>>t;
      while(t--)
      {
                cin>>s;
                l=strlen(s);
                for(i=l-1;i>=0;i--)
                {
                                if(s[i]=='?'&&i>=3||s[i]=='F')
                                {
                                if(s[i-1]=='?'||s[i-1]=='E')
                                {
                                 if(s[i-2]=='?'||s[i-2]=='H')            
                                 {
                                 if(s[i-3]=='?'||s[i-3]=='C')
                                 {s[i-3]='C';
                                 s[i-2]='H';
                                 s[i-1]='E';
                                 s[i]='F';
                                 }}}}}
                                for(i=0;s[i];i++)
                                if(s[i]=='?')s[i]='A';
                                cout<<s<<endl;
                                }
                                return 0;
                                }
                                
                                                               
