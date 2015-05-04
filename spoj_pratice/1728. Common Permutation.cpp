#include<bits/stdc++.h>
using namespace std;
main()
{
string st,st1,st2;
while(1)
{
st2.clear();
cin>>st>>st1;
int arr[26],i;
for(i=0;i<26;i++)arr[i]=0;
for(i=0;i<st.size();i++)
arr[st[i]-'a']++;
for(i=0;i<st1.size();i++)
if(arr[st1[i]-'a']>0)
{
arr[st1[i]-'a']--;
st2.push_back(st1[i]);
}
sort(st2.begin(),st2.end());
cout<<st2<<endl;
if(cin.eof())
    break;
}

}
