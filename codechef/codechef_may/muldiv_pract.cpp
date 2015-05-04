//muldiv
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
      long long t,n,k,m,c;
      cin>>t;
      while(t--)
      {c=0;
                cin>>n>>k>>m;
                if(k==1)cout<<n<<endl;
                else
                {
                while(n%k==0)
                {c++;
                n/=k;
                if(m==c)break;
                }
                if(m==c)cout<<n<<endl;
               else
               {
                   c=m-c;
               
                   if(!(c%2))cout<<n<<endl;
                   else cout<<n*k<<endl;
                   }
                   }
                   }
                   return 0;
                   }
      
                
