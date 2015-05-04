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
long long sum=0,i;
long t,n,arr[10000],arr1[10000];
cin>>t;
while(t--)
{sum=0;
cin>>n;
for(i=0;i<n;i++)cin>>arr[i];
for(i=0;i<n;i++){cin>>arr1[i];}
sort(arr,arr+n);
sort(arr1,arr1+n);
for(i=0;i<n;i++){sum+=arr[i]*arr1[i];}
cout<<sum<<endl;
}
}
