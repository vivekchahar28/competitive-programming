#include<bits/stdc++.h>
using namespace std;
main()
{
int t,n,m,i,all_diff,diff,x,j;
vector<int> v;
vector<int> v1;
    cin>>t;
    while(t--)
    {
        all_diff=INT_MAX;
        v.clear();
        v1.clear();
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
                cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>x;
            v1.push_back(x);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        i=j=0;
        while(i<n&&j<m)
        {

                diff=abs(v[i]-v1[j]);
                all_diff=min(all_diff,diff);
                if(v[i]<v1[j])
                    i++;
                else j++;
            }
            cout<<all_diff<<endl;
        }
    }

