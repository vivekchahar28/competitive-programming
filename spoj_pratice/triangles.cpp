#include<stdio.h>
int main()
{
    long long t,s,n,arr[1000006],p;
    arr[1]=1;
    for(i=1;i<1000005;i++)
    {
        p=i/2;

        arr[i]=arr[i-1]+((i)*(i+1)/2)+((p)*(p+1)/2)
    }
   cin>>t;
    while(t--)
    {

        cout<<sum<<endl;
    }
    return 0;
}
