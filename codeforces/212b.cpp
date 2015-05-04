#include<bits/stdc++.h>
using namespace std;
main()
{
int t,i,j,f;
cin>>t;
char s[9][9],ch;
pair<int,int> p2,p1;
string st;
while(t--)
{
    f=0;
    int c=0;
for(i=0;i<8;i++)
{cin>>st;
    for(j=0;j<8;j++)
{
    s[i][j]=st[j];
    if(s[i][j]=='K'&&c==0)
 {
    p1.first=i;
    p1.second=j;
    c++;
 }
 else if(s[i][j]=='K')
 {
     p2.first=i;
    p2.second=j;
 }
}
}
char s[10][10];
for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    s[i][j]='0';
s[p1.first]='1';
s[p1.second]='1';
if(p1.first-2>=0)
{
s[p1.first-2]='1';
s[p1.second]='1'



    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else  cout<<"NO"<<endl;
}
}
}
