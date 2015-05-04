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
#define ll long long
#define F first
#define S second

using namespace std;
ll we,n,k;
pair<ll,ll> pa[20];
void cal(ll i,ll w,ll p)
{
     if(i==n)
     {
     we=max(we,w);
     return ;}
     if(pa[i].F<=p) cal(i+1,w+pa[i].S,p-pa[i].F);
     cal(i+1,w,p);
}

main()
{ll t,i;
 cin>>t;
 while(t--)
 {we=0;
           cin>>n>>k;
           for(i=0;i<n;i++)cin>>pa[i].F>>pa[i].S;
           cal(0ll,0ll,k);
           cout<<we<<endl;
           }
           return 0;
           }
