#include<bits/stdc++.h>
using namespace std;
int n,m,p,a[1000002],ar[1000002];
int fn(int val)
{
int  p1=p,i;
    int f=1;
    for(i=0;i<val;i++)
    {
        if(a[n-val+i]<ar[i])
        {
            if((ar[i]-a[n-val+i])>p1)
            {
                 f=0;
                 break;
               }
            else p1-=ar[i]-a[n-val+i];
        }
    }
    return f;
}
main()
{
    cin>>n>>m>>p;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>ar[i];
        sort(a,a+n);
        sort(ar,ar+m);
        int l,r,mid;
        l=0;
        r=min(n,m);
        while(l<=r)
        {
            mid=(l+r)/2;
            int val=fn(mid);
            if(val&&!fn(mid+1))
                break;
            else if(val)
                l=mid+1;
            else r=mid-1;
        }
    int val=0,i;
    for(i=0;i<mid;i++)
    {
        int var=a[n-mid+i]-ar[i];
     if(var>0)
            val=val+ar[i];
        else
        {
            p+=var;
            val=val+a[n-mid+i];
        }
        }
        val=((val-p)<0)?0:val-p;
        cout<<mid<<" "<<val<<endl;
        }
