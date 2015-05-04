#include<iostream>
using namespace std;
main()
{
        int t,n,m,arr_arr[1000],i;
        cin>>t;
        while(t--)
        {
            cin>>n>>m;
            int maximum_value=-1;
            for(i=0;i<n;i++)
            {
                cin>>arr_arr[i];
                maximum_value=max(maximum_value,arr_arr[i]);
            }
            for(i=0;i<n;i++)
                m-=(maximum_value-arr_arr[i]);

            if(m%n==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        }
