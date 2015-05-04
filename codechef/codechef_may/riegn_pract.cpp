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
      long long t,n,a[100009],a1[100009],a2[100009],k,Max,i,m1,m2,a3[100009],a4[100009];
main()
{

      cin>>t;
      while(t--)
      {
      cin>>n>>k;
      for(i=0;i<n;i++)cin>>a[i];
      a1[0]=a[0];
      m1=a[0];
      for(i=1;i<n-k-1;i++){a1[i]=max(a[i],a1[i-1]+a[i]);}
      a3[0]=a1[0];
      for(i=1;i<n-k-1;i++){a3[i]=max(a3[i-1],a1[i]);}
      a2[n-1]=a[n-1];
      for(i=n-2;i>=n-k-1;i--)
      a2[i]=max(a[i],a2[i+1]+a[i]);
      a4[n-1]=a2[n-1];
      for(i=n-2;i>n-k+1;i--)
     { a4[i]=max(a4[i+1],a2[i]);}
      
      
      Max=INT_MIN;
      for(i=0;i<n-k-1;i++)
      
      {Max=max(Max,a3[i]+a4[n-k+1+i]);}
      
      cout<<Max<<endl;
      }
      return 0;
      }
      
