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
      int n,x,f=0,c=0,c1=0;
      cin>>n;
      while(n--)
      {
                cin>>x;
                if(x!=0)
                c++;
                else c=0;
                c1=max(c,c1);
}
cout<<c1<<endl;
}

