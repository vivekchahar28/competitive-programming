#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
main()
{
int t,a;
char b[200000];
cin>>t;
while(t--)
{
cin>>a>>b;
if(a==0){cout<<b<<endl;continue;}
int i=0;

int c=0;
 while(b[i])
        {
            c=(c*10+(b[i]-'0'))%a;
        i++;
        }
        cout<<gcd(a,c)<<endl;;

}


}
