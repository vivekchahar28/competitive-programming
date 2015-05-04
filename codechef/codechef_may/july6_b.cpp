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

                  
unsigned long long power_of_girls(unsigned long long  x,unsigned long long  y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power_of_girls(x, y/2)*power_of_girls(x, y/2);
    else
        return x*power_of_girls(x, y/2)*power_of_girls(x, y/2);
        }
int prime[100000]={0};
int a[100000]={0};
void prime_gen()
{
  int i,j;
  a[0]=1;
  a[1]=1;
 
  i=3;
  while(i<100000)
     {if(a[i]==0)
        for(j=3*i;j<100000;j+=2*i)
           a[j]=1;
      i+=2;
     }
 
 j=0;
 for(i=2;i<100000;i++)
    if(!a[i])
      prime[j++]=i;
 
}
#define getcx getchar//_unlocked
                     inline void inp( unsigned long long &n )
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
   unsigned  long long expo[100000],k,baller[100000],a[100000],caller[100000],n,t,i,marker,j;
   prime_gen();
    inp(t);
    while(t--)
    {
              inp(n);
              marker=1;
              for(i=0;i<n;i++)
              {
                              inp(a[i]);
                    caller[i]=0;       
                    baller[i]=1; 
                    expo[i]=0;
              }
              for(j=0,i=0,marker=0;j<n;)
              {
                       if(caller[marker]==0)
                       {
                                  baller[i]++;
                                  caller[marker]=1;
                                  marker=a[marker]-1;
                       }
                       else
                       {
                           marker++;j++;i++;
                       }
              }
              unsigned long long sum=1;
              for(marker=0;marker<i;marker++)
              if(baller[marker]!=1)
              {
              baller[marker]=baller[marker]-1;
              //cout<<baller[marker]<<" ";
              }
              cout<<endl;
              marker=i;
              for(i=0;i<n;i++)
              {
              for(j=0;prime[j]<=sqrt(baller[i]) && j<n;j++)
             {
             if (baller[i] % prime[j] == 0) {
            long long exp = 0;
         do {
         baller[i] /= prime[j];
         ++exp;
         }while(baller[i] % prime[j] == 0);
         if(exp>expo[prime[j]])
         expo[prime[j]]=exp;
         }
         }
       if(!expo[baller[i]])
       expo[baller[i]]=1;
       }
             for(i=1;i<n;i++)
             {
                             sum=sum*power_of_girls(i,expo[i]);
           
                             sum=sum%1000000007;
             }
               cout<<sum<<endl;
          }
    return 0;
}
 
