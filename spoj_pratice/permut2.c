#include<iostream>
using namespace std;
main()
{long n,arr[100008],i;
    cin>>n;
    while(n)
    {

        for(i=1;i<=n;i++)cin>>arr[i];
        f=0;
        for(i=1;i<=n;i++){if(arr[arr[i]]!=i){f=1;break;} }
        if(f)cout<<"not ambiguous"<<endl;
        else cout<<"ambiguous"<<endl;
        cin>>n;
    }

}
