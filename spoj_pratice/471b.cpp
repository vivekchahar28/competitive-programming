#include<bits/stdc++.h>
using namespace std;
#define sd scanf("%d",&n)
#define PB push_back
#define F first
#define S second
int h[3000];
main()
{
   int n,a[3000],i;
   cin>>n;
   pair<int,int> p[3000];
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
       h[a[i]]++;
       p[i].F=a[i];
       p[i].S=i;
   }
   sort(p+1,p+n+1);
   bool f=0,fl=0;
   int pos3=-1,pos2=-1,pos1=-1;
   for(i=0;i<3000;i++)
   {
     if(h[i]>2){ f=1;
     pos3=i;
     break;
   }
   else if(h[i]==2&&!fl)
   {
       pos2=i;
       fl=1;
   }
   else if(h[i]==2&&fl)
   {
       pos1=i;
       break;
   }
}
if(pos3==-1&&pos1==-1)
    cout<<"NO"<<endl;
else
{
    cout<<"YES"<<endl;
    if(f==1)
    {
        for(i=1;i<=n;i++)
        {
            cout<<p[i].S<< " ";
        }
        cout<<endl;
        bool flag=0;
        for(i=1;i<=n;i++)
        {
            if(p[i].F==pos3&&!flag)
            {
                cout<<p[i+1].S<<" "<<p[i].S<<" ";
                i++;
                flag=1;
            }
            else cout<<p[i].S<< " ";
        }
        cout<<endl;
        flag=0;
        for(i=1;i<=n;i++)
        {
            if(p[i].F==pos3&&!flag)
            {
                cout<<p[i+2].S<<" "<<p[i].S<<" "<<p[i+1].S<<" ";
                i+=2;
                flag=1;
            }
            else cout<<p[i].S<< " ";
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            cout<<p[i].S<< " ";
        }
        cout<<endl;
        bool flag =0;
        for(i=1;i<=n;i++)
        {
            if(p[i].F==pos2&&!flag)
            {
                cout<<p[i+1].S<<" "<<p[i].S<<" ";
                i++;
                flag=1;
            }
            else cout<<p[i].S<<" ";
        }
        cout<<endl;
        flag=0;
        for(i=1;i<=n;i++)
        {
            if(p[i].F==pos1&&!flag)
            {
                cout<<p[i+1].S<<" "<<p[i].S<<" ";
                i++;
                flag=1;
            }
           else  cout<<p[i].S<<" ";
        }
        cout<<endl;
    }
}
}
