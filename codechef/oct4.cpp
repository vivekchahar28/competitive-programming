#include<iostream>
#include<limits.h>
using namespace std;
#define L int
main()
{
    L test_cases,red,green,blue,m,x,max_red,max_blue,max_green,ultimate_minimum,i;
    cin>>test_cases;
    while(test_cases--)
    {
      max_red=max_blue=max_green=INT_MIN;
      ultimate_minimum=INT_MAX;
        cin>>red>>green>>blue>>m;
        for(i=0;i<red;i++)
        {
            cin>>x;
            max_red=max(max_red,x);
        }
        for(i=0;i<green;i++)
        {
            cin>>x;
            max_green=max(max_green,x);
        }
        for(i=0;i<blue;i++)
        {
            cin>>x;
            max_blue=max(max_blue,x);
        }
        ultimate_minimum=min(ultimate_minimum,max(max_red,max(max_blue,max_green)));
        for(i=0;i<m;i++)
        {
            if(max_red>=max_blue&&max_red>=max_green)
            {
                max_red/=2;
            }
            else if(max_blue>=max_red&&max_blue>=max_green)
            {
                max_blue/=2;
            }
            else if(max_green>=max_blue&&max_green>=max_red)
            {
                max_green/=2;
            }
            ultimate_minimum=min(ultimate_minimum,max(max_red,max(max_blue,max_green)));
        }
        cout<<ultimate_minimum<<endl;
    }
}
