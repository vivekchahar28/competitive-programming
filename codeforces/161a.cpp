#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[5][5],i,j,x,y;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
           {
        cin>>a[i][j];
        if(a[i][j]==1)
        {x=i;
        y=j;
        }
    }

    }
    cout<<abs(2-x)+abs(2-y)<<endl;
}
