#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    int x[100001],y[100001],z[100001],i;
    cin>>s;
    if((s[0])=='x')x[0]=1;
    if((s[0])=='y')y[0]=1;
    if((s[0])=='z')z[0]=1;
    for(i=1;i<s.size();i++)
    {
            x[i]=x[i-1];
            y[i]=y[i-1];
            z[i]=z[i-1];
        if(s[i]=='x')
            x[i]++;
        if(s[i]=='y')
            y[i]++;
        if(s[i]=='z')
            z[i]++;
    }
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int p,q;
        cin>>p>>q;
        if((q-p)<2)
            cout<<"YES"<<endl;
        else
        {
            int cx=x[q-1];
            int cy=y[q-1];
            int cz=z[q-1];
            if(p>1)
            {
                cx-=x[p-2];
                cy-=y[p-2];
                cz-=z[p-2];
            }
            if(cx==cy)
            {
                if((cz==cx+1)||(cz==cx)||(cz==cx-1))
                    cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
            }
            else if(cx==cz)
            {
                if((cy==cx+1)||(cy==cx)||(cy==cx-1))
                    cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
            }
            else if(cy==cz)
            {
                if((cx==cy+1)||(cy==cx)||(cx==cy-1))
                    cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
            }
            else {
                    cout<<"NO"<<endl;
            }
        }
    }
}
