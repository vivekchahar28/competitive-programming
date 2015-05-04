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
long long n,k,arr[1000004],var1,pos,i,var=0,j,min1;
main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)cin>>arr[i];
    for(i=1;i<=k;i++)var+=arr[i];
    pos=i-k;
    min1=var;
    for(;i<=n;i++)
    {
        var1=var+arr[i]-arr[i-k];
        if(var1<min1)
        {
            min1=var1;
            pos=i-k+1;
            //cout<<min1<<endl;;
        }
        var=var1;
    }
    cout<<pos<<endl;

    }
