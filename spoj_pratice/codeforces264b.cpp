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
    int n,arr[100005],i,pos,max1=0,s,s1;
    cin>>n;
    for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       s1=arr[0];
       s=0;
       for(i=1;i<n;i++)
       {
           s+=arr[i-1]-arr[i];
           if(s<0){s1-=s;s=0;}

       }
cout<<s1<<endl;
}
