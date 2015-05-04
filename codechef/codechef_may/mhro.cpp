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
long long arr[100006],S[100006];
void makeset(string S[],long long n)
{
for(i=n-1;i>=0;i--)
S[i]=i;
}
 
long long find(long long S1[],long long i)
{
    if (S1[i] == NULL)
        return i;
return (S1[i]=find(S1, S1[i]));
}
  main()
  {
        long long t,n,p,q,x,y,var;
  char s[20];
        cin>>t;
        map<long long,long long>m;
        map<long long,long long>::iterator it;
        while(t--)
        {cin>>n;
        while(n--)
        {y=0;
                  cin>>x>>s;
                  for(i=0;s[i];i++)
                  {
                  var=s[i];
                  y*=100;
  y+=var;
}
        m[x]=
