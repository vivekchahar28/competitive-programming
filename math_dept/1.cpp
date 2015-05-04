#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    long long n,m,k,a[100000],ts=0,i,temp;
    vector<long long> a1;
    cin>>n>>m>>k;
    temp=m;
        for(i=0;i<n;i++)
            cin>>a[i];
        long long j=0;
        i=0;

        while(i<n)
        {ts=0;
            if((n-i+1)>=m)
        {   for(i;i<temp;i++)
            ts+=a[i];
            temp+=m;
        a1.push_back(ts);
        }
        else break;
        }
        if(a1.size()==0)
        {
            cout<<0<<endl;
            return 0;
        }
        sort(a1.begin(),a1.end());
        reverse(a1.begin(),a1.end());
        ts=0;
        for(i=0;i<k;i++)
            {
                ts+=a1[i];
            }

        cout<<ts<<endl;
        }
