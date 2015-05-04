#include<bits/stdc++.h>
using namespace std;
#define L int
#define sd(n) scanf("%d",&n)
L h[1000001];
main()
{
    L n,k,i;
    sd(n);
    L arr[n+1];
    for(i=0;i<n;i++)
    {
        sd(arr[i]);
    }
    sd(k);
    L now_max=-1;
    set<L> q;
    set<L>::iterator it;
    for(i=0;i<k;i++)
    {
        h[arr[i]]++;
        q.insert(arr[i]);
    }

    cout<<*(--q.end())<<" ";

    L ft=0,sd=k;

    while(sd<n)
    {
        q.insert(arr[sd]);
        h[arr[sd]]++;
        h[arr[ft]]--;
        if(h[arr[ft]]==0)
        {
            q.erase(arr[ft]);
        }
    cout<<*(--q.end())<<" ";
        ft++;
        sd++;
    }
    }

