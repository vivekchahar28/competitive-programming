#include<iostream>
//#include<conio.h>
#include<cmath>                       
unsigned long long power(unsigned long long  x,unsigned long long  y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
void merge(long long *,long long, long long , long long );
void mergesort(long long *a, long long low, long long high)
{
    long long mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
void merge(long long *a, long long low, long long high, long long mid)
{
    long long i, j, k, c[10000];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
int prime[100000]={0};
int a[100000]={0};
void pri()
{
  int i,j,n,t,count,st,end,nos;
  long long v;
  a[0]=1;
  a[1]=1;
 // for(i=4;i<100000;i+=2)
   //  a[i]=1;
 
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
 
 //nos=j;
}
using namespace std;
int main()
{
   unsigned  long long expo[100000],k,b[100000],a[100000],c[100000],n,t,i,m,l,j,max;
   pri();
    cin>>t;
    while(t--)
    {
              cin>>n;
              m=1;
              for(i=0;i<n;i++)
              {
                              cin>>a[i];
                    c[i]=0;       
                    b[i]=1; 
                    expo[i]=0;
              }
              for(j=0,i=0,m=0;j<n;)
              {
                       if(c[m]==0)
                       {
                                  b[i]++;
                                  c[m]=1;
                                  m=a[m]-1;
                       }
                       else
                       {
                           m++;
                           j++;
                           i++;
                       }
              }
              unsigned long long lcm=1;
              for(m=0;m<i;m++)
              if(b[m]!=1)
              {
              b[m]=b[m]-1;
              //cout<<b[m]<<" ";
              }
              cout<<endl;
              m=i;
              for(i=0;i<n;i++)
              {
              for(j=0;prime[j]<=sqrt(b[i]) && j<n;j++)
             {
             if (b[i] % prime[j] == 0) {
            long long exp = 0;
         do {
         b[i] /= prime[j];
         ++exp;
         }while(b[i] % prime[j] == 0);
         if(exp>expo[prime[j]])
         expo[prime[j]]=exp;
         }
         }
       if(!expo[b[i]])
       expo[b[i]]=1;
       }
             for(i=1;i<n;i++)
             {
                             lcm=lcm*power(i,expo[i]);
                             //cout<<lcm<<" ";
                             lcm=lcm%1000000007;
             }
               cout<<lcm<<endl;
          }
   // getch();
    return 0;
}
 
