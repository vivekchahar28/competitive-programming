#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n==0)
        return;
    if(n==2)
        {
            cout<<2;
            return ;
        }
    else if(n==1)
        {
            cout<<2(0);
            return ;
        }
    else mif(n==4)
    {
        cout<<2(2);
        return ;
    }
        int twop=1,j=1;
        while(twop<=n)
        {
            twop*=2
            j++;
        }
        cout<<"(";
        print(j);
        if(twop!=n)
        {
        cout<<"+";
        print(n-twop);
        }
        cout<<")";
}
main()
{
int arr[7]={ 137, 1315, 73, 136, 255, 1384, 16385},i;
for(i=0;i<7;i++)
{
    cout<<arr[i]<<"=";print(arr[i]);
    cout<<endl;
}
getch();
}
