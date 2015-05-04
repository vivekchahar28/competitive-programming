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
using namespace std;
int b_search(int a[],int val,int size)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
    mid=(low+high)/2;
    if(a[mid]==val)
    {
    if(mid==0)return mid+1;
    else if(a[mid-1]==val)
    high=mid;
    else return mid+1;
}
else if(a[mid]>val)high=mid;
else low=mid;
}
}
main()
{
      int a[]={1,1,2,2,2,3,4,5,6};
      cout<<b_search(a,4,9)<<endl;
      int i;
      cin>>i;
      }


      
