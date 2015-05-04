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
int lis( int arr[], int n )
{
   int lis[n], i, j, max1 = 0;

 
   for ( i = 0; i < n; i++ )
      lis[i] = 1;
   
   for ( i = 0; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( arr[i]> arr[j] && lis[i] < lis[j] + 1)
            lis[i] = lis[j] + 1;
   
   for ( i = 0; i < n; i++ )max1 =max(max1, lis[i]);
         return max1;
}
main()
{
      int t,n,i,j;
      cin>>t;
      while(t--)
      {
                cin>>n;
                int a[n],ta[n];
                
                for(i=0;i<n;i++){cin>>a[i];ta[i]=1;}
                int max=0;
                for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i]>a[j] && ta[i]<ta[j]+1)
					ta[i] = ta[j]+1;
			}
		}
		for(i=0;i<n;i++)
		{
			if(max<ta[i])
				max = ta[i];
		}
                
                cout<<max<<endl;}
                
	return 0;
}

      
