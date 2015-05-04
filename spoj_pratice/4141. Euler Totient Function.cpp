#include<bits/stdc++.h>
using namespace std;
int arr[1000004]={0},ans[1000001];
void seive()
{

    arr[0]=arr[1]=1;
    int i,j;
    for(i=1;i<1000001;i++)ans[i]=i;
    for(i=2;i<1000001;i++)
    {
        if(arr[i]==0)
         {
             ans[i]-=(ans[i]/i);
             for(j=2*i;j<1000001;j+=i)
        {
            arr[j]=1;
            ans[j]-=(ans[j]/i);
        }
           }
    }
}
main()
{
int t,n;
scanf("%d",&t);
seive();
while(t--)
{
    scanf("%d",&n);
    printf("%d\n",ans[n]);
}
}
