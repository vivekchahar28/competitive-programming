#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
long a[6000000];
main()
{
    int n,i,x;
    sd(n);
    for(i=0;i<n;i++)
    {
        sd(x);
        a[x]++;
    }
    for(i=1;i<n;i++)
        if(a[i]==2)
        break;
    printf("%d ",i);
    for(i=1;i<n;i++)
       printf("%d ",i);
    cout<<endl;

}
