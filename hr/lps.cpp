#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > mat(100,vector<int>(100,0));
int lps(int i,int j,string s)
{
    if(i==j)return 1;
    if(mat[i][j]!=0)
    {
        return mat[i][j];
    }
    if(s[i]!=s[j])
    {
        return max(lps(i+1,j,s),lps(i,j-1,s));
    }
    else  if(j==i+1)
        return 2;
    else if(s[i]==s[j])
    {
        return lps(i+1,j-1,s)+2;
    }
}
main()
{
    cout<<lps(0,9,"abadefghij");

}
