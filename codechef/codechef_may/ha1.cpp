#include<iostream>
#include<math.h>
int gcd(long a,long b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
using namespace std;

int a[10000]={0};
void fn()
{int i,j;
  a[0]=1;
  a[1]=0;
  for(i=4;i<10000;i+=2)
     a[i]=1;
 
  i=3;
  while(i<5000)
     {if(a[i]==0)
        for(j=3*i;j<10000;j+=2*i)
           a[j]=1;
      i+=2;
     }
}
main()
{
      fn();
      unsigned long long n,f=1,c=0,i,j,s,s1;
      cin>>n;
      if(n==1){cout<<0<<endl;return 0;}
      for(i=2;i<=n;i++)
      {
      f=f*i;                
      s=f;
      s1=s;
      for(j=1;j<=i;j++)
      {if(a[j]==0)
      {//cout<<j;
      s=s/j;
      s1=s;
    //  if(a[s]!=0)
      //{
      if((gcd(j,s)==1)){c++;
      //if(a[i]==0)c--;
      cout<<j<<"/"<<s<<endl;}
      }
      s=s1;
      }
      }
      cout<<c<<endl;
      getchar();
      cin>>c;
      }
      
      
