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
          
unsigned           long long n,t,i,c;
           char s;
           cin>>t;
           while(t--)
           {c=0;
           cin>>n;
      
                     for(i=0;i<n;i++)
                  {cin>>s;   if(s=='1')
                     c++;
                     }
        c=c*(c+1)/2;
        cout<<c<<endl;
                     }
                     return 0;
                     }
