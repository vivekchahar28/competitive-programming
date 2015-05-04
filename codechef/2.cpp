#include<bits/stdc++.h>
using namespace std;
main()
{
int n,m,d,i;
char ch;
cin>>n>>m;
vector<int> arr(n+1);
for(i=1;i<=n;i++)
        cin>>arr[i];
        i=1;
        while(m--)
{
        cin>>ch>>d;
        if(ch=='R')
        {
            if((n-i+1)>=d)
                cout<<arr[i+d-1]<<endl;
            else{
                d-=(n-i+1);
                cout<<arr[d]<<endl;
            }
        }
        else if(ch=='C')
        {
            if((n-i)>=d)
            i+=d;
            else
            {
                d-=(n-i);
                i=d;
            }

        }
        else
        {
            if((i-1)>=d)
                i-=d;
            else
            {
                d-=(i-1);
                i=n-d+1;
            }
        }
}

}
