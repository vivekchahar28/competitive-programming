#include<bits/stdc++.h>
using namespace std;

#define L long long

const int maximum_k = 100003;

L n, k;
L vector_in[maximum_k];
 main()
{
    L t,i;
    cin>>t;
    while(t--)
    {
    cin >> n >> k;

  for ( i = 1; i <= k; ++i) {
    cin >> vector_in[i];
  }

  vector_in[0] = 0;
  vector_in[k+1] = n+1;

sort(vector_in,vector_in+k+2);

  long long answer = 0;
  for (L i = 1; i <= k+1; ++i) {
    L low = vector_in[i-1] + 1;
    L high = vector_in[i] - 1;

    if (low <= high && low > answer + 1)
      break;

    answer += max(0ll, high * (high + 1) / 2 - low * (low - 1) / 2);
  }

 if(answer%2)cout<<"Mom"<<endl;
 else cout<<"Chef"<<endl;
}
}
