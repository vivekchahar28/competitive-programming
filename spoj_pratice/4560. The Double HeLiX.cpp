#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        int arr[n],i,j;
        for(i=0;i<n;i++)
            cin>>arr[i];
        cin>>m;
        int arr1[m];
        for(j=0;j<m;j++)
            cin>>arr1[j];
        int s=0,s1=0,s2=0;
        i=j=0;
        while(i<n&&j<m)
        {
            if(arr[i]==arr1[j])
            {
                s1+=arr[i];
                s2+=arr1[j];
                s+=max(s1,s2);
                s1=0;
                s2=0;
                i++;
                j++;
    //        cout<<"s= "<<s<<endl;
            }
            else if(arr[i]<arr1[j])
            {
                s1+=arr[i];
                i++;
            }
            else
            {
                s2+=arr1[j];
                j++;
            }
        }
        if(i==n)
        {
            while(j<m)
            {

                s2+=arr1[j];
                j++;
            }
        }
        else if(j==m)
        {
            while(i<n)
            {
                s1+=arr[i];
                i++;
            }
        }
        s+=max(s1,s2);
        cout<<s<<endl;
    }
}
