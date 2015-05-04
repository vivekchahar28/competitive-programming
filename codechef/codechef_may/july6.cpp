//Garden Game
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
#define mod 1000000007

#define st_clk double st=clock();
#define end_clk double en=clock();
#define show_time cout<<"\tTIME="<<(en-st)/CLOCKS_PER_SEC<<endl;

#define getcx getchar//_unlocked
                     inline void inp( long &n )
 {
    n=0;
    int ch=getcx();int sign=1;
    while( ch < '0' | ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
  }
using namespace std;
main()
{
      long  t,n,ar[100005],ar1[100009],ar2[100009],i,j,c,f;
      inp(t);
      while(t--)
      {
                for(i=1;i<=n;i++)
                ar1[i]=i;
      inp(n);
      for(i=1;i<=n;i++)
      inp(ar[i]);
      c=0;
      while(1)
      {f=0;
              c++;
      for(i=1;i<=n;i++)
        ar2[ar[i]]=ar1[i];
      for(i=1;i<=n;i++)
      ar1[i]=ar2[i];
      for(i=1;i<=n;i++)if(ar1[i]!=i){
                                   f=1;break;}
                                  for(i=1;i<=n;i++)cout<<ar1[i]<<" ";
                                      getchar();
                                            c%=mod;
      if(!f)break;

      }
      cout<<c<<endl;

      }
      return 0;
      }
