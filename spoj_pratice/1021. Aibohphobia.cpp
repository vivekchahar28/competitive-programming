#include<bits/stdc++.h>
using namespace std;
  int arr[6101][6101];
int lcs( char *X, char *Y, int m, int n )
{
   int i, j;

   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         arr[i][j] = 0;

       else if (X[i-1] == Y[j-1])
         arr[i][j] = arr[i-1][j-1] + 1;

       else
         arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
     }
   }
   return arr[m][n];
}
int main()
{
int t;
char s[1000000],s1[1000000];
cin>>t;
while(t--)
{
    cin>>s;
    strcpy(s1,s);
    int l=strlen(s);
    reverse(s1,s1+l);
    //cout<<s1<<endl;
    long v=lcs( s, s1, l, l);
        cout<<l-v<<endl;
}
    return 0;
}
