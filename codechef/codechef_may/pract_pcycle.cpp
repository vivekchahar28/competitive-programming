//garden game
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

#define getcx getchar//_unlocked
                     inline void inp( int &n )
 {
    n=0;
    int ch=getcx();int sign=1;
    while( ch < '0' | ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
  }



main()
{
int n,a2[1006],a1[1006],t,p,i,k,f;
vector<vector<int> > v(1006);
      vector<int> v1;
      inp(n);
      for(i=1;i<=n;i++)
      inp(a2[i]);
      for(i=1,k=0;i<=n;i++)
      {
                           f=0;
      t=a2[i];
      while(!a1[t])
      {
      if(!f)v1.push_back(t);
      else v1[k]=min(v1[k],t);
       v[k].push_back(t);
       
      a1[t]=1;
      t=a2[t];
      f=1;
      }
      if(f)k++;
      }
      
      cout<<k<<endl;
      
      for(n=0;n<k;n++)
      {f=0;
      for(i=0;i<v[n].size();)
      {if(!f){cout<<v1[n]<<" ";f=1;}
      else if(v[n][i++]!=v1[n]){cout<<v[n][i-1]<<" ";
}    
      }
      cout<<v1[n]<<" ";
      cout<<endl;
      }
//      getchar();
      return 0;
      }
