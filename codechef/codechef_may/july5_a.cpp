//dishown
//union find

#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <math.h>
#include <ctime>
 #define getcx getchar//_unlocked
                     inline void input( long long &n )
 {
    n=0;
    long long ch=getcx();long long sign=1;
    while( ch < '0' | ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
  }

using namespace std;
long long arr[100006],S[100006],n,t,q,x,y,c,i,j;
void makeset(long long S[],long long n)
{
for(i=n-1;i>=0;i--)
S[i]=i;
}

long long find(long long S1[], long long i)
{
    if (S1[i] == i)
        return i;
return (S1[i]=find(S1, S1[i]));
}
  
void Union(long long S[], long long x, long long y)
{
long long yy = find(S,y);
long long xx =find(S,x);
if(arr[xx]<arr[yy]){
             S[xx]=S[y];
             }else if (arr[xx]>arr[yy]){S[yy]=S[x];
             }}
             
    main()
     {
            input(t);
      while(t--)
      {
                input(n);
                  for(i=0;i<n;i++)
                input(arr[i]);
            makeset(S,n);
                 input(q);
                while(q--)
                {for(i=0;i<n;i++)
                cout<<S[i]<<" ";
                cout<<endl;
                input(c);
                input(x);
                if(!c)
                {input(y);
                if(find(S,x-1)==find(S,y-1))cout<<"Invalid query!"<<endl;
                 else
                 Union(S,x-1,y-1);
                 }
                 else
                 {cout<<find(S,x-1)+1<<endl;
                 }
                 }
                 }
                 return 0;
                 }
                 
      

