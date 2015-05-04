#include<bits/stdc++.h>
using namespace std;
#define s(n) scanf("%d",&n)
      int n,arr[1000004],i,a[1006],a1[1005],t;

main()
{
    s(t);
    while(t--)
    {
        s(n);
        for(i=0;i<1003;i++)
            a[i]=a1[i]=0;
            int f=0;
          int v=n%2?((n/2)+1):(n/2);
          for(i=0;i<n;i++)
          {
             s(arr[i]);
              if(arr[i]>0)
              {
                  a[arr[i]]++;
                  if(a[arr[i]]>(v))
                  {
                      f=1;
                      break;
                  }
              }
              else
              {
                  arr[i]=arr[i]*-1;
                  a1[arr[i]]++;
                  if(a1[arr[i]]>(v))
                  {
                      f=1;
                      break;
                  }
              }
            }
             v=arr[i];
                         i++;

            for(;i<n;i++)s(arr[i]);
            if(f)printf("YES %d\n",v);
            else printf("NO\n");
}
}
