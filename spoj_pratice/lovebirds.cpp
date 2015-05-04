#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
main()
{
    stack<long> s;
    long n,i,passed=0,f=0;
    int arr[10000];
    cin>>n;
    while(n)
    {   f=0;
    passed=0;
        for(i=0;i<n;i++)
                cin>>arr[i];

                for(i=0;i<n;i++)
                {
        if(arr[i]==passed-1)
            passed=arr[i];
        else{
              if(s.size()==0||s.top()==(passed+1)||s.top()==(arr[i]+1))
              {
                  while(!s.empty())
                  {passed=s.top();
                      s.pop();
                      if(s.top()!=passed+1)break;
                  }
                     s.push(arr[i]);
                  }
                  else
                    {
                    f=1;
                    break;
                  }
        }
        }
        if(f)cout<<"no"<<endl;
        else cout<<"yes"<<endl;
        cin>>n;
        }
    return 0;
}
