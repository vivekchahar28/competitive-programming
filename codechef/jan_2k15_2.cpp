#include<bits/stdc++.h>
using namespace std;
 #define L long long
 #define M 100005

main()
{
std::ios::sync_with_stdio(false);
L t,n,q,i;
cin>>t;
while(t--)
{
    cin>>n>>q;
    L arr[n],arr1[n],arr2[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
      arr1[0]=arr[0];
      for(i=1;i<n;i++)
      {
          arr1[i]=__gcd(arr1[i-1],arr[i]);


      }
      arr2[n-1]=arr[n-1];
      for(i=n-2;i>=0;i--)
      {
          arr2[i]=__gcd(arr2[i+1],arr[i]);
         // cout<<arr2[i]<<" ";
      }
      while(q--)
      {
          L l,r;
          cin>>l>>r;
          L x,y;
          if(l!=1)
           {
             x=arr1[l-2];
             if(r==n)
                y=x;
             else y=arr2[r];
             cout<<__gcd(x,y)<<endl;;
           }
          else
            {
                y=arr2[r];
                cout<<y<<endl;

        }
    }}
                return 0;
                }
