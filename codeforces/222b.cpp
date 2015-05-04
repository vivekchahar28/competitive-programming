#include<bits/stdc++.h>
using namespace std;
#define sd scanf("%d",&n)
#define PB push_back
#define F first
#define S second
main()
{
    int t,n,x,y,c=0,c1=0,c2=0,i;
    cin>>t>>n;
    for(i=1;i<=6;i++)
    {
        if((i-t)<0)
        {
            x=-1*(i-t);
        }
        else x=i-t;
        if((i-n)<0)
        {
            y=-1*(i-n);
        }
        else y=i-n;
        if(x==y)c1++;
        else if(x<y)
            c++;
        else c2++;
    }
    cout<<c<<" "<<c1<<" "<<c2<<endl;


}
