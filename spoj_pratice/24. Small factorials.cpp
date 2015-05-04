#include<bits/stdc++.h>
using namespace std;
main()
{
  int a[1001],n,i,t,num;
  cin>>t;
  while(t--)
  {
      cin>>n;
      num=n;
      int pos,k=1000;
      while(num)
      {
          int rem=num%10;
          a[k]=rem;
          k--;
          num/=10;
      }
      pos=k+1;
      for(i=n-1;i>=2;i--)
      {
        long long carry=0,prod;
        for(int j=1000;j>=pos;j--)
        {
            prod=a[j]*i+carry;
            a[j]=prod%10;
            carry=prod/10;
        }
        while(carry)
        {
          a[--pos]=carry%10;
          carry/=10;
        }
    }
    for(i=pos;i<=1000;i++)
        cout<<a[i];
    cout<<endl;
}
return 0;
}
