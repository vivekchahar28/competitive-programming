#include <iostream>
using namespace std;
#define f(i,j) for(j=0;j<=i;++j)
int T,n,i,j,M[100][100];main(){cin>>T;while(T--){cin>>n;for(i=0;i<n;++i)f(i,j)cin>>M[i][j];for(i=n-2;i>=0;--i)f(i,j)M[i][j]+=max(M[i+1][j],M[i+1][j+1]);cout<<M[0][0]<<'\n';}}
