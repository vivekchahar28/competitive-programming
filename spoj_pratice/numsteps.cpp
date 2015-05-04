#include<iostream>
using namespace std;
main()
{
    long n,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x==y)
        {
            if(x%2)cout<<x+y-1<<endl;
        else cout<<x+y<<endl;
        }
        else if((x-y)!=2)cout<<"No Number"<<endl;
        else{
          if(x%2)cout<<x+y-1<<endl;
        else cout<<x+y<<endl;
        }





    }
}
