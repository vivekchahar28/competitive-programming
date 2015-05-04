#include<iostream>
using namespace std;
int highest_set_bit(int v)
{
unsigned r = 0;

while (v >>= 1) {
    r++;
}
return r;
}
main()
{
      long n,a[1002],t,q,bit[1002],p,i,x,j,f;
      cin>>n;
      for(i=0;i<n;i++)
     { cin>>a[i];
     x=a[i];
     j=0;
     while(x)
     {
     if(x%2)bit[j++]=1;
     x=x/2;
     }
     }
     cin>>t;
     while(t--)
     {cin>>q;
     x=q;
     j=0;
     f=1;
     while(x)
     {
      p=x%2;       
     if(p==1&&bit[j++]!=p)f=0;
     x/=2;
     }
     if(f)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
     }
     return 0;
     }
             
      
