#include<iostream>
using namespace std;
long mergearray(long arr[],long start,long mid,long end)
{
    long range1=mid-start+1,range2=end-mid,i,j,k,in_count=0;
    long temp[range1],temp1[range2];
    for(i=0;i<range1;i++)
    temp[i]=arr[start+i];
    for(i=0;i<range2;i++)
    temp1[i]=arr[mid+i+1];

    i=j=k=0;
    while(i<range1&&j<range2)
    {
        if(temp[i]<temp1[j])
        {
            arr[start+k]=temp[i++];
        }
        else arr[start+k]=temp1[j++];
        k++;
        in_count+=(range1-i-start);
    }
    if(i<range1)
    {
        while(i<range1)
        {
            arr[start+k]=temp[i++];
            k++;
        }
    }
    if(j<range2)
    {
        while(j<range2)
        {
            arr[start+k]=temp1[j++];
            k++;
        }
    }
    return in_count;
}

long mergesort(long arr[],long start,long end)
{
    long in_count=0;
    if(start<=end)
    {
        long mid=(start+end)/2;
        in_count=mergesort(arr,start,mid-1);
        in_count+=mergesort(arr,mid+1,end);
        in_count+=mergearray(arr,start,mid,end);
    }
    return in_count;
}
long n,i,arr[1000000],t;
main()
{
    cin>>t;
    while(t--)
    {
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<mergesort(arr,0,n-1)<<endl;
    }
}
