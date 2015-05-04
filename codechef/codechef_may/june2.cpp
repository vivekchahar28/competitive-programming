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
#define st_clk double st=clock();
#define end_clk double en=clock();
#define show_time cout<<"\tTIME="<<(en-st)/CLOCKS_PER_SEC<<endl;
using namespace std;
long long hcf1(long long a,long long b)
{int r;
     while(1)
     {r=b%a;
     b=a;
     if(r==0)
     break;
     a=r;
     }
     return a;
}     
main()
{
      unsigned long long t,n,m,c,c1,sum,sum1,i,p,p1;
      cin>>t;
      while(t--)
      {sum=0;
      p=1;

                cin>>n>>m;
      
                c=n/2;
                c1=m/2;
                if(n%2)c++;
                if(m%2)c1++;
                sum+=c*(m-c1)+c1*(n-c);
                sum1=n*m;
     p=hcf1(sum,sum1);           
                cout<<sum/p<<"/"<<sum1/p<<endl;
              
                }
                
return 0;
}
