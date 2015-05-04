#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void fun(int a,int b)
{

    if(b==1)

    {
       v.push_back(a);
        return;
    }
    if(a%b==0)
 {
    v.push_back((a/b)-1);
    v.push_back(1);
    return ;
}
    else
    {
    v.push_back((a/b));
     fun(b,a%b) ;
    }
}
main()
{
    int test,i,a,b;
    while(1)
    {
    cin>>a>>b;
    if(a==0&&b==0)
        break;
    v.clear();
    fun(a,b);
    int sz=4*v.size()+1,top1=(v.size()-2)*2+1,t=0;

    while((t)<v.size())
    {
        for(i=0;i<sz;i++)
        {
            if(top1==1)
            {
                if(i==sz-top1)
                    cout<<1<<endl;
            }
            else if(i-top1==0)
                cout<<1;
                else cout<<'.';
        }
        cout<<endl;
        for(i=0;i<4*t;i++)
            cout<<'.';
        cout<<v[t]<<".+.";
        i+=4;
        for(;i<sz;i++)
            cout<<'.';
        cout<<endl;
        top1-=2;
        t++;
        if(t==v.size()-1)
            for(i=0;i<sz-1;i++)
            cout<<'.';
        cout<<v[t]<<endl;
    }

    }
        }
