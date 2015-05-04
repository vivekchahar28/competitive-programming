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
      long n,i,a[100005],var,k;
      cin>>n;
      for(i=1;i<=n;i++)
      cin>>a[i];
      k=n/2;
      var=a[k+1];
      for(i=n/2;i>=2;i--)
      {
      if(a[i]<var)break;
      }
      cout<<1<<endl<<i<<" "<<k<<endl;
      return 0;
      }
