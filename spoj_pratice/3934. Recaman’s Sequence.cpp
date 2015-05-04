#include<bits/stdc++.h>
using namespace std;
#define L long
L L a[1000000];
main()
{
    map<L L,bool> h;
    h[a[0]]=1;
    L L i;
    for(i=1;i<=500000;i++)
    {
        a[i]=a[i-1]-i;
        if(a[i]<0)
         a[i]=a[i-1]+i;
        else
        {
         if(h[a[i]]==1)
            a[i]=a[i-1]+i;
        }
        h[a[i]]=1;
    }
    while(1)
    {
        L L x;
        cin>>x;
        if(x==-1)
            break;
        cout<<a[x]<<endl;
    }

}
