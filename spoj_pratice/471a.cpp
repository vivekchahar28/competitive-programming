#include<bits/stdc++.h>
using namespace std;
int a[10],i,a1[10];
int v;
main()
{
    for(i=0;i<6;i++)
    {
        cin>>a[i];
        a1[a[i]]++;
    }
    sort(a,a+6);
    bool f=0;
    for(i=0;i<10;i++)
    {
        if(a1[i]>=4)
        {
            f=1;
              v=i;
            break;
        }
    }
    if(!f)
        cout<<"Alien"<<endl;
    else{
            if(a1[v]==6)
            {
                cout<<"Elephant" <<endl;
                return 0;
            }
        else if(a1[v]==5)
        {
                cout<<"Bear" <<endl;
                return 0;
        }

             f=0;
             int x,y;
        for(i=0;i<6;i++)
        {
            if(a[i]!=v&&!f)
            {
                x=a[i];
                f=1;
            }
            if(a[i]!=v&&f)
            {
                y=a[i];
            }
        }
        if(x==y)cout<<"Elephant" <<endl;
        else {
            cout<<"Bear" <<endl;
        }
    }
}
