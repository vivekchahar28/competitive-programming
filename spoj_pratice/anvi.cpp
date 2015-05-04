#include<iostream>
using namespace std;
main()
{
    long long t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((x%2)||(y%2))cout<<"Rani"<<endl;
        else cout<<"Nandu"<<endl;
    }
    return 0;
}
