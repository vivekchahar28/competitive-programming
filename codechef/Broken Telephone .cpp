#include<bits/stdc++.h>>
using namespace std;
main()
{
    long T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        vector<long> A(N,0);
        int i=0;
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        long C=0;
        for(i=0;i<N;i++)
        {
            if(i>0&&A[i]!=A[i-1])
                {
                    //cout<<C;
                    C++;
                    continue;
                }
                if(i<N-1&&A[i]!=A[i+1])
                    C++;
        }
        cout<<C<<endl;
    }
}
