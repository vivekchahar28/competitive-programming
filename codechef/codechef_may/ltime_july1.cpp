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
      long n,sum=0,x;
      cin>>n;
      while(n--)
      {
      cin>>x;
      sum=sum&x;
      }
      cout<<sum<<endl;
      }
