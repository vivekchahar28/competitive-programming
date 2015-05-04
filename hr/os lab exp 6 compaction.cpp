#include<bits/stdc++.h>
using namespace std;
#define L int
L disk[100];
main()
{
    L count=0,k,i,top,p;
    srand(time(0));
    k=rand()%30+40;
    for(i=0;i<k;i++)
    {
        p=rand()%100;
        disk[p]=1;
    }
    cout<<"Initial disk....\n";
    for(i=0;i<100;i++)
    {
        cout<<disk[i]<<" ";
    }
    cout<<endl;
    top=0;
    while(disk[top]!=0&&top<100)
        top++;
    for(i=0;i<100;i++)
    {
        if(disk[i]==1)
        {
            disk[top]=1;
            disk[i]=0;
            count++;
            while(disk[top]==1&&top<100)
                top++;
        }
    }
    cout<<"Disk on compaction...\n";
    for(i=0;i<100;i++)
    {
        cout<<disk[i]<<" ";
    }

    cout<<"\nNumber of movements...\n"<<count;
}

