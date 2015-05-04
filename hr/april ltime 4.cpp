#include<bits/stdc++.h>
using namespace std;
int arr[1000000]={0};
vector<int> prime;
void seive()
{
    arr[0]=arr[0]=1;
    int i,j;
    for(i=2;i<1000000;i++)
    {
        if(arr[i]==0)
         {
             for(j=2*i;j<1000000;j+=i)
           arr[j]=1;
           //cout<<i;
           //cin>>i;
           }
    }
    for(i=2;i<1000000;i++)
        {
            if(arr[i]==0)prime.push_back(i);
        }

}
main()
{
int t,k;
scanf("%d",&t);
seive();
while(t--)
{
    long long n;
    scanf("%lld%d",&n,&k);
    int temp=n,i=0,k=0;
    vector<int> p(10000);
    while(temp!=1)
    {
        if(temp%prime[i]==0)
        {
       if(k==0||p[k-1]!=prime[i])
            p[k++]=(prime[i]);
            temp/=prime[i];
        }
        else i++;
    }
    long long var,var1=n;
    for(i=0;i<k;i++)
    {
        var=p[i]-1;
        var1*=var;
        var1/=p[i];
            }
    printf("%d\n",var1);
}
}
