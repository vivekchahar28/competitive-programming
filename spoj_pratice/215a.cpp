#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,d,m,s=0,i,a[1000],s1=0;
    cin>>n>>d;
    for(i=0;i<n;i++)
      {
          cin>>a[i];
          s1+=a[i];
        }
        sort(a,a+n);
    cin>>m;
    if(m<=n)
    {
        for(i=0;i<m;i++)
            s+=a[i];
            cout<<s<<endl;
    }
    else
    {
        m-=n;
        s1-=d*m;
        cout<<s1<<endl;
    }

}
