#define first F
#define second S
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <math.h>
#include <ctime>
#define getcx getchar//_unlocked
                     inline void input( long long &n )
 {
    n=0;
    int ch=getcx();int sign=1;
    while( ch < '0' | ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
  }
long long b_search(long long a[],long long val,long long size)
{
    long long low=0,high=size-1,mid;  
    while(low<=high)
    {
    mid=(low+high)/2;
    if(a[mid]==val) return mid;
else if(a[mid]>val)high=mid-1;
else low=mid+1;
}
}
using namespace std;
long long n,k,p1,x,i,y,f,j,ar[100009],var,var1,ar1[100009],ar2[100009];
main()
{

input(n);input(k);input(p1);
if(n==1)
{
input(x);
        for(i=0;i<p1;i++)
{input(x);input(y);
if((x==1LL)&&(y==1LL)) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
}
else
{
for(i=0;i<n;i++)
{
input(ar[i]);
ar1[i]=ar[i];
}
sort(ar1,ar1+n);
j=0;
for(i=1;i<n;i++)
{if(ar1[i]-ar1[i-1]<=k)
ar2[i]=j;
else {j++;  ar2[i]=j;}
}
for(i=0;i<p1;i++)
{
input(x);input(y);
var=min(ar[x-1],ar[y-1]);
var1=max(ar[x-1],ar[y-1]);
if(var==var1)cout<<"Yes"<<endl;
else
{
j=b_search(ar1,var,n);
var1=b_search(ar1,var1,n);
if(ar2[j]!=ar2[var1])cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}}}
return 0;
}
