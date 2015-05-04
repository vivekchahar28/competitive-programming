#include<bits/stdc++.h>
using namespace std;
#define L long long
L arr[1000002];
L n,k,x,y,minx=INT_MAX,miny=INT_MIN,maper[25001];
main()
{
   scanf("%d %d",&n,&k);
    while(k--)
    {
        scanf("%d %d",&x,&y);
        arr[x]++;
        arr[y+1]--;;
        minx=min(minx,x);
        miny=max(miny,y);
    }
    L s=0;
    for(L i=1;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
        maper[arr[i]]++;
    }
    L i;
    for(i=0;i<=25000;i++)
    {
     s+=maper[i];
     if(s>=((n/2)+1))
        break;
    }
   // for(L j=1;j<=n;j++)
     //   cout<<arr[j]<<" ";
    cout<<i<<endl;
}
