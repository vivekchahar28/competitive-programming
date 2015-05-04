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
#include <climits>
using namespace std;
main()
{
    int n,s,x,y,p=0,f=0;
cin>>n>>s;

while(n--)
{
    cin>>x>>y;
    if(x<s){f=1;
        if(y!=0)p=max(p,100-y);}
if(x==s&&y==0)f=1;
}
if(p==0&&f==0)cout<<-1<<endl;
else cout<<p<<endl;
}
