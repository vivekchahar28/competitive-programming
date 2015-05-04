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
long long  _mergeSort(long long arr[], long long temp[], long long left, long long right);
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right);
long long mergeSort(long long arr[], long long array_size)
{
    long long *temp = (long long *)malloc(sizeof(long long)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
  

long long _mergeSort(long long arr[], long long temp[], long long left, long long right)
{
  long long mid, inv_count = 0;
  if (right > left)
  {

    mid = (right + left)/2;
  
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
  
 
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right)
{
  long long i, j, k;
  long long inv_count = 0;
  
  i = left;
  j = mid; 
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
  
  
      inv_count = inv_count + (mid - i);
    }
  }
  
  
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  
  
  while (j <= right)
    temp[k++] = arr[j++];
  
  
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  
  return inv_count;
}
  
main()
{
      long long n,q,a[200007],i;
      cin>>q;
      while(q--)
      {
                cin>>n;
      for(i=0;i<n;i++)
      cin>>a[i];
      cout<<mergeSort(a,n)<<endl;
      }
      return 0;
      }
      
  
