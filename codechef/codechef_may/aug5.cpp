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
      long long n,arr[100007],i,fa=0,arr1[100007],t,fa1,j,t1,var,var1,t2,t3;
      vector<pair<pair<int,int> ,int > > v;
      pair<pair<int,int> ,int > p1;
      cin>>n;
      for(i=1;i<=n;i++)
      {cin>>arr[i];
      arr1[i]=arr[i];
      if(i<=n/2)fa+=arr[i];
      else fa-=arr[i];
      }srand(3);
for(i=0;i<10;i++)
{fa1=0;
t=rand()%n;
t++;
t1=rand()%n;t1++;
t2=min(t,t1);
t=max(t,t1);
t3=t;
reverse(arr+t2,arr+t);
for(j=0;j<n;j++)
{ if(j<=n/2)fa1+=arr[j];
      else fa1-=arr[j];
      }
      if(fa1<fa){cout<<1<<endl<<t2<<" "<<t<<endl;return 0;}
      else
      {reverse(arr+t2,arr+t);
}
}
cout<<1<<endl<<"1 "<<rand()%n<<endl;
      return 0;
      }
