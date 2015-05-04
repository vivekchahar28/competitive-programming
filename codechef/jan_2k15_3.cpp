#include<bits/stdc++.h>
using namespace std;
#define L long long
main()
{
    L t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        L arr[n],sum=0,sum1,vv=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]!=0)
                vv++;
            sum+=arr[i];
        }
        sum1=sum-vv+1;
        if(sum1==100||sum==100)
            cout<<"YES"<<endl;
        else if(sum1<100&&sum>100)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;

}
