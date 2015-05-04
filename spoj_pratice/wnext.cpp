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
long long x,y,z;
cin>>x>>y>>z;
while(1)
{
    if((z-y)==(y-x))cout<<"AP "<<z+(z-y)<<endl;
    else
    {
        cout<<"GP "<<z*(z/y)<<endl;
    }
    cin>>x>>y>>z;
    if(x==0 && y == 0 && z == 0)
        break;
}
}
