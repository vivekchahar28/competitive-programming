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
      int t,n,a[100000],i;
      cin>>t;
      while(t--)
      {
      cin>>n;
      for(i=0;i<n;i++)
      cin>>a[i];
      sort(a,a+n);
      cout<<a[0]+a[1]<<endl;
      }
      return 0;
      }
