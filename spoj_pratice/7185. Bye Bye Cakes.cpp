#include<bits/stdc++.h>
using namespace std;
#define L int
main()
{
    L a,b,c,d,x,y,z,w;
    float a1,a2,a3,a4;
    while(1)
    {
        cin>>a>>b>>c>>d>>x>>y>>z>>w;
        if(a==-1)
            break;
            if(a==b&&b==c&&c==d&&d==0)
            {
                cout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
                continue;
            }
            a1=a/x;
            a2=b/y;
            a3=c/z;
            a4=d/w;
            if(a1*x-a!=0)a1++;
            if(a2*y-b!=0)a2++;
            if(a3*z-c!=0)a3++;
            if(a4*w-d!=0)a4++;
            if(a1>=a2&&a1>=a3&&a1>=a4)
            {
                a2=a1*y-b;
                a3=a1*z-c;
                a4=a1*w-d;
                a1=a1*x-a;
            }
            else if(a2>=a1&&a2>=a3&&a2>=a4)
            {
                a1=a2*x-a;
                a3=a2*z-c;
                a4=a2*w-d;
                a2=a2*y-b;
            }
            else if(a3>=a1&&a3>=a2&&a3>=a4)
            {
                a1=a3*x-a;
                a2=a3*y-b;
                a4=a3*w-d;
                a3=a3*z-c;
            }
            else if(a4>=a2&&a4>=a3&&a4>=a1)
            {
                a1=a4*x-a;
                a2=a4*y-b;
                a3=a4*z-c;
                a4=a4*w-d;
            }
            cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<endl;
    }

}
