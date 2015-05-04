#include<bits/stdc++.h>
using namespace std;
    int frn[100000],frn_f[100000],x,n,i,m;

main()
{    cin>>n;
    while(n--)
    {
        cin>>x;
        if(frn_f[x]==1)
            frn_f[x]=0;
        frn[x]=1;
        cin>>m;
        while(m--)
        {
            cin>>x;
            if(frn[x]!=1)
                frn_f[x]=1;
        }
    }
    int counter=0;
    for(i=0;i<100000;i++)
      if(frn_f[i]) counter++;
      cout<<counter<<endl;
}
