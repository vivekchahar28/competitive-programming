#include<bits/stdc++.h>
using namespace std;
#define L long long

L n,a[10000],i,x;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n;
    for(i=0;i<n;i++)
        {

        cin>>x;
        a[x]++;
    }
    L max1=INT_MIN,fr=-1,c=0;
    for(i=0;i<10000;i++)
    {
    if(a[i]>max1)
    {
        fr=i;
        max1=a[i];
        c=1;
    }
    else if(a[i]==max1)
    {
        c++;
    }
    }
    if(c==1)
    {
        cout<<fr<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}
