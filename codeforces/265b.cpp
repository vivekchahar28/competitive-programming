#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n,c=1,i;
    pair<int,int> arr[10000];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i].first;
    for(i=1;i<=n;i++)
    {
        if(arr[i].first==1)
        {
        arr[i].second=i;
        }
        else arr[i].first=2;
    }
    sort(arr+1,arr+n+1);
    if(arr[1].first==2)c=0;
    for(i=2;i<=n;i++)
    {
                    if(arr[i].first==1)
                    {                    
                    if((arr[i].second-arr[i-1].second)>2)
                    c+=2;
                    else c+=arr[i].second-arr[i-1].second;
                    }
                    else
                    break;
}
cout<<c<<endl;
}
