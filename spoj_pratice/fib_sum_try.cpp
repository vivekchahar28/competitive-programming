#include<bits/stdc++.h>
using namespace std;
#define phi 1.61803398875
#define mod 1000000007*2.236067977;
 long long int power( long long int a, long long int b)
{
     long long int res;
    if(b==1)
        return a;
    res=power(a,b/2);
    res=(res*res)%mod;
    if(b%2)
    res=(res*a)%mod;
    return res;
}
int main(void) {
	int t;
	long long int a,i,b,c,sum,n,m;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		scanf("%lld",&m);
		if(n==0||n==1){
			a=n+1;
		}
		else{
			a=(((power(phi,n+1)+mod)%mod)-(power(-phi,-(n+1)+mod)%mod))/sqrt(5);
		}
		if(m==0|| m==1){
			b=m+1;
		}
		else{
		b=(((power(phi,m+2)+mod)%mod)-(power(-phi,-(m+2)+mod)%mod))/sqrt(5);
		}
		c=b-a;
	printf("%lld\n",c);
	}
	return 0;
}
