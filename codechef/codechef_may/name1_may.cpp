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
 int t,n,arr[26],check,i,j;
   char s[200006],s1[200006];
main()
{
     
    
      cin>>t;
      while(t--)
      {for(i=0;i<26;i++)arr[i]=0;
                check=0;
                cin>>s>>s1;
                for(i=0;s[i];i++)
                arr[s[i]-'a']++;
                for(i=0;s1[i];i++)  arr[s1[i]-'a']++;
                cin>>n;
                for(i=0;i<n;i++)
                {
                cin>>s;
                if(!check){for(j=0;s[j];j++)
                {if(arr[s[j]-'a']>0)arr[s[j]-'a']--;
                else check=1;
                }}
                }
                if(check)cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
                }
                return 0;
                }
                
