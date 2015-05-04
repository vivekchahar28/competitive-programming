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
int n,a[1000006],i,t,s=0;
main()
{
      
    cin>>n;
      for(i=0;i<n;i++)cin>>a[i];
      sort(a,a+n);
      for(i=0;i<n-1;i++)
      s=max(s,a[i]&a[i+1]);
      cout<<s<<endl;
   }
      
      
