#include<iostream>
using namespace std;
long long comb(long long n,long long k)
{long long ans=1,p=1;
    if(k>n||k<0)return 0;
    else if(k==0)return 1;
    else if(k==1)return n;
   for(long long i=0;i<k;i++)
   {
       ans=ans*n;
       ans/=p;
       n--;
       p++;
   }return ans;
}
main()
{
long long t , n,k,a,b;
cin>>t;
while(t--)
{
    cin>>n>>k;
    a=n-1;
    b=k-1;
    b=min(b,a-b);
    cout<<comb(a,b)<<endl;

}
}
