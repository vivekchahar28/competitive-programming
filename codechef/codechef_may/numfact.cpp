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
int prime[1000000]={0};
int a[1000000]={0},i,j;

void p_k_kam()
  {
  a[0]=1;
  a[1]=1;
  for(i=4;i<1000000;i+=2)
     a[i]=1;

  i=3;
  while(i<1000000)
     {if(a[i]==0)
        for(j=3*i;j<1000000;j+=2*i)
           a[j]=1;
      i+=2;
     }
     j=0;
 for(i=2;i<1000000;i++)
 if(!a[i])prime[j++]=i;
}
main()
{
p_k_kam();

      long t,n,x,k;
      map<long,long> m;
      cin>>t;
      while(t--)
      {		long long ans=1;
      cin>>n;
      while(n--)
      {
                cin>>x;
                if(a[x]==0)
                {if(m[x]==0)m[x]=1;
                else m[x]+=1;
                }
                else
                {
                    k=0;
                    while(x!=1)
                    {
                               if(x%prime[k]==0)
                               {
                                if(m[prime[k]]==0)m[prime[k]]=1;
                                else m[prime[k]]+=1;
                                x/=prime[k];
                                }
                                else k++;            
                                }
                                }
                                }
    		map<long,long>::iterator it;

		for(it=m.begin();it!=m.end();++it)
			ans*=((*it).second+1LL);
                                m.clear();
                                
                                cout<<ans<<endl;
}
}
