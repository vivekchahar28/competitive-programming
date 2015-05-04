#include<bits/stdc++.h>
using namespace std;
main()
{
  int primes [27]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,
        61,67,71,73,79,83,89,97,101,103};
        while(1)
            {
             long long v,num=1;
            cin>>v;
             for(int i=0;i<27;i++)
             {
                 long long temp=num*primes[i];
                 if(temp>v)
                    break;
                 num=temp;
             }
             cout<<num<<endl;
            if(cin.eof())
                break;
        }

}
