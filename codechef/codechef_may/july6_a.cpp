//garden game
#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#define mod 1000000007
using namespace std;
unsigned long long int call(unsigned long long int a,unsigned long long int b)
{
   unsigned long long int res;
   if(b==1)
       return a;
   res=call(a,b/2);
   res=(res*res)%mod;
   if(b%2)
   res=(res*a)%mod;
   return res;
}
#define getcx getchar//_unlocked
                     inline void inp( long long &n )
 {
    n=0;
    int ch=getcx();int sign=1;
    while( ch < '0' | ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
  }
  long long t,a[100007],a1[100007],n,i,c,sum=0,x,y,temp ,j,a2[100007],prime[100007],var;
  vector<long long> v1(n+1);

vector<long long> v3(n+1);
  void p_k_kam()
  {
  a[0]=1;
  a[1]=1;
  for(i=4;i<100000;i+=2)
     a[i]=1;

  i=3;
  while(i<100000)
     {if(a[i]==0)
        for(j=3*i;j<100000;j+=2*i)
           a[j]=1;
      i+=2;
     }
     j=0;
 for(i=2;i<100000;i++)
 if(!a[i])prime[j++]=i;
}
main()
{    p_k_kam();
//for(i=0;i<100;i++)cout<<prime[i];
       set<long long> v;
       std::set<long long>::iterator it;
      inp(t);
      while(t--)
      {
      inp(n);
      for(i=1;i<=n;i++)
      inp(a2[i]);
      for(i=1;i<=n;i++)
      {
      c=0;
      t=a2[i];
      while(!a1[t])
      {
                   a1[t]=1;
      t=a2[t];c++;
      }
      if(c){v.insert(c);}
      }
                    for(i=1;i<=100000;i++){a1[i]=0;a2[i]=0;}

      if(v.size()>=2)
      {             
                    it=v.end();
      it--;
      sum=*it;
      it--;
      j=0;
      var=sum;

      while(sum!=1)
      {      
                 if(a[sum]==0)
                 {if(a1[sum]==0)v1.push_back(sum);
                 a1[sum]++;
                 sum/=sum;
                 }
                 while(sum%prime[j]==0&&prime[j]<=sqrt(sum))
                 {
                                                            if(sum%prime[j]==0)
                 {if(a1[prime[j]]==0)v1.push_back(prime[j]);
                 a1[prime[j]]++;
                 sum/=prime[j];
                 var=sum/prime[j];
                 if(sum%var==0)
                 {
                 if(a[var]==0)
                 {if(a1[var]==0)v1.push_back(var);
                 a1[var]++;
                 }}
                 }}
                 j++;}
                 
                 sum=var;
                // cout<<v3.size()<<v1.size();
                 //for(i=1;i<v1.size();i++)cout<<v1[i];
                     for(;it!=v.begin();it--)
                     {x=*it;
                     j=0;
                     
                     if(sum%x!=0)
                     {
      while(x!=1)
      {
                 if(a[x]==0)
      {if(a2[x]==0)v3.push_back(x);
                 a2[x]++;
                 x/=x;
                 }
                 while(x%prime[j]==0&&prime[j]<=sqrt(x))
                 {if(x%prime[j]==0)
                 {if(a2[prime[j]]==0) v3.push_back(prime[j]);
                 a2[prime[j]]++;
                 x/=prime[i];
                 var=x/prime[j];
                 if(x%var==0)
                 {
                 if(a[var]==0)
                 {if(a2[var]==0)v3.push_back(var);
                 a2[var]++;
                 }}
                 }}
                 j++;
                 }
                 var=v3.size();
                 for(i=1;i<var;i++)
                 {
                                   if(a1[v3[i]]==0){v1.push_back(v3[i]);
                               a1[v3[i]]=a2[v3[i]];}
                               else if(a1[v3[i]]<a2[v3[i]])a1[v3[i]]=a2[v3[i]];
                 a2[v3[i]]=0;
                 }}}

     j=0;                                 x=*it;
 while(x!=1)
                 {
                  if(a[x]==0)
      {       if(a2[x]==0)v3.push_back(x);
                 a2[x]++;
                 x/=x;
                 
                 }                        
                 while(x%prime[j]==0&&prime[j]<=sqrt(x))
                 {if(x%prime[j]==0)
                 {if(a2[prime[j]]==0) v3.push_back(prime[j]);
                 a2[prime[j]]++;
                 x/=prime[i];
                 var=x/prime[j];
                 if(x%var==0)
                 {
                 if(a[var]==0)
                 {if(a2[var]==0)v3.push_back(var);
                 a2[var]++;
                 }}}}
                 j++;
                 }
                 var=v3.size();
                 for(i=1;i<var;i++)
                 {
                                   if(a1[v3[i]]==0){  v1.push_back(v3[i]);
                                 a1[v3[i]]=a2[v3[i]];
                               }
                          else if(a1[v3[i]]<a2[v3[i]])  a1[v3[i]]=a2[v3[i]];
                 a2[v3[i]]=0;
                 }
                 v3.clear();
           var=v1.size();
           sum=1;
           
           for(i=1;i<var;i++)
           {sum*=call(v1[i],a1[v1[i]]);
      sum%=mod;
      }
v1.clear();
      }else{
             it=v.begin();
             sum=*it;
             }
      cout<<sum<<endl;
      v.clear();
      }}
