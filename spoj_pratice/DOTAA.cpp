#include<bits/stdc++.h>
using namespace std;
main()
{
int t,n,m,d,arr[200000];
cin>>t;
while(t--)
{
    int ans=0,i;
    cin>>n>>m>>d;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=n-1;i>=0;)
    {
        if(arr[i]>d)
            {
                arr[i]-=d;
                m--;
            }
            else i--;
    }

    if(m<=0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;

}
