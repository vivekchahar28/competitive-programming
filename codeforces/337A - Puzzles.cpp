#include<bits/stdc++.h>
using namespace std;
main()
{
    int N,M,i;
    cin>>M>>N;
    vector<int> V(N,0);
    for(i=0;i<N;i++)
    {
        cin>>V[i];
    }
    sort(V.begin(),V.end());
    int val=INT_MAX;
    for(i=0;i<N-M;i++)
    {
        val=min(val,V[i+M-1]-V[i]);
    }
    if(val==INT_MAX)
        val=0;
    cout<<val<<endl;
}
