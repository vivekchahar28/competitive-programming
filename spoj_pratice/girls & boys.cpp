#include<iostream>
#include<cmath>
using namespace std;
main()
{
    long long x,y,p;
    while(1)
    {
        cin>>x>>y;
        if(x==-1&&y==-1)break;
        y= ceil( (double)max(x,y)/(double)(min(x,y)+1));
        cout<<y<<endl;
    }
return 0;
}
