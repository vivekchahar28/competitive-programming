#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[11],i;
    for(i=0;i<10;i++)
        cin>>a[i];
    int s=0;
    for(i=0;i<10;i++)
        {
            s+=a[i];
            if(s>=100)
                break;
        }
            if(abs(s-a[i]-100)<s-100)
                s=s-a[i];
                cout<<s<<endl;
}
