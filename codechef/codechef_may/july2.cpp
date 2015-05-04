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
      long long t,x,y,sum;
      cin>>t;
      while(t--)
      {
      cin>>x>>y;
      if((x+y)%2==0)
      {   if(x<0)x=-x;
      if(y<0)y=-y;
      cout<<2*max(x,y)<<endl;
      }
      else
      {
          if(y<0)y=-y;
          sum=y-1;
          if(sum<0)sum=-sum;
          if(x<0)x=-x;
          x=max(x,sum);
          x=2*x;
          x++;
          cout<<x<<endl;
          }
          }
          return 0;
          }
