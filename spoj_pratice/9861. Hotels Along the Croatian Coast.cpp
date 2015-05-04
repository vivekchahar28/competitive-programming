#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],i,ft=0,sd=0,sum=0,maxsum=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        bool f=0;
    while(sd<n&&ft<=sd)
    {
        if(sum<=m&&sum!=0)
            maxsum=max(maxsum,sum);
       if(sum>m)
       {
           sum-=a[ft];
           ft++;
       }
       else if(sum==m){
        f=1;
       break;
       }
       else {
        sum+=a[sd];
        sd++;
       }
    }
        if(sum<=m)
            sum=max(sum,maxsum);
        while(!f&&ft<n)
        {
            sum-=a[ft++];
           if(sum<=m) maxsum=max(sum,maxsum);
        }
        if(f)printf("%d\n",m);
    else printf("%d\n",maxsum);

}
