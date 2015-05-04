#include<bits/stdc++.h>
using namespace std;
long long arr[1000001],c,n;
long long fn(long long x)
{
long long cc=1,i,p=arr[0];
for(i=1;i<n;i++)
{
if((arr[i]-p)>=x)
cc++;
if(cc==c)
return 1;
p=arr[i];
}
return 0;
}
main()
{
    long long t,i,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(i=0;i<n;i++)
            cin>>arr[i];
            sort(arr,arr+n);
        long long l=0,r=arr[n-1];
        while(l<r)
        {
            m=(l+r)/2;
            long long v=fn(m);
            if(v)
                l=m+1;
            else r=m;
        }
                cout<<m<<endl;

        }
        return 0;
    }

