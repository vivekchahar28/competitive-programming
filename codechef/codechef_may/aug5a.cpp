#define first F
#define second S
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
      long n,n1,t,i,a[100003],k,k1;
      pair<int,int> p[100003];
      cin>>n;
      for(i=1;i<=n;i++){cin>>a[i];p[i].F=a[i];p[i].S=i;}
      sort(p,p+n+1);
             for(i=1;i<=n;i++)cout<<p[i].S;
             cin>>k;
      for(i=n/2;i>=2;i--)
      {if(p[i].S>p[i-1].S)break;
      }
      if(i==2&&p[i].S<p[i-1].S)k=i-1;
else  k=i;
      for(i=n/2;i<=n-1;i++)
      {if(p[i].S<p[i+1].S)break;
      }
      if(i==n-1&&p[i].S>p[i+1].S)k1=i+1;
else  k1=i;
cout<<1<<endl<<k1<<" "<<k<<endl;
return 0;
}

      
      
      

