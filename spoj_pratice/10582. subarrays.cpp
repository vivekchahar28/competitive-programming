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
    priority_queue<L> q;

    for(i=0;i<k;i++)
    {
        h[arr[i]]++;
        now_max=max(now_max,arr[i]);
        q.push(arr[i]);
    }

    cout<<now_max<<" ";

    L ft=0,sd=k;

    while(sd<n)
    {
        h[arr[ft]]--;
        q.push(arr[sd]);
        h[arr[sd]]++;

        while(!q.empty())
        {
            if(h[q.top()]>0)
            {
                cout<<q.top()<<" ";
                break;
            }
            q.pop();
        }


        ft++;
        sd++;
    }

    }

