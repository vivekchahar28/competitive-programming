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
      int n,i,a[100000],sum=0,j,k;
      cin>>n;
      for(i=0;i<n;i++)
      cin>>a[i];
      for(i=0;i<n;i++)
      {for(j=i+1;j<n;j++)
      {for(k=j+1;k<n;k++)
      {
      if(__gcd(__gcd(a[i],a[j]),a[k])==1)
      sum++;
      }
      }
      }
      cout<<sum;
}
