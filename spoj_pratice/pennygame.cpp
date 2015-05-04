#include<iostream>
using namespace std;
main()
{
    string s,s1;
    long long arr[8],i,x,j;
long t,n;
cin>>t;
while(t--)
{s.clear();
    for(i=0;i<8;i++)arr[i]=0;
    cin>>x;
    cin>>s;
    for(i=0;i<38;i++)
    {s1.clear();
        for(j=i;j<(i+3);j++)
            {
                s1.push_back(s[j]);
            }
            if(s1=="TTT")arr[0]++;
            else if(s1=="TTH")arr[1]++;
            else if(s1=="THT")arr[2]++;
            else if(s1=="THH")arr[3]++;
            else if(s1=="HTT")arr[4]++;
            else if(s1=="HTH")arr[5]++;
            else if(s1=="HHT")arr[6]++;
            else arr[7]++;
    }
    cout<<x<<" ";
    for(i=0;i<8;i++)cout<<arr[i]<<" ";
    cout<<endl;


}
}
