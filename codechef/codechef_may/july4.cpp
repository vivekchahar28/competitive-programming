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

main()
{char a[16][16];
      int t,n,m,k,i,j,p,c;
      char A[]={'A','C','T','G'};
      char B[]={'A','A','G','G'};
      char C[]={'G','G','G','G'};
      char D[]={'A','A','C','T'};
    srand(5);
      cin>>t;
      while(t--)
      { p=0;  c=0;
                cin>>n>>m>>k;
                if((n*m)>=(k))
                {for(i=0;i<n;i++)
                {for(j=0;j<m;j++)
                cout<<A[3];
                cout<<endl;}}
               else if((n*n*m*m-3)<=k)
               { for(i=0;i<n;i++)
                {for(j=0;j<m;j++)
                cout<<A[(p++)%4];
               if(m%2==0)++p%4;
                cout<<endl;
                }}
                
              else if((n*m<=k)&&(n*m+n>=k))
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++)if(c<1){cout<<A[0];c++;}else cout<<C[0];
                                 cout<<endl;
                                 }
                                 }
                else if((n*m+n<=k)&&(n*m+2*n>=k))
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<2) {cout<<B[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                else if((n*m+2*n<=k)&&(n*m+3*n>=k))
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=m-1;j>=0;j--){if(c<3) {cout<<B[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 else if((n*m+3*n<=k)&&(n*m+4*n>=k))
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<4) {cout<<B[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 else if((n*m+40<=k)&&(n*m+75>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<5) {cout<<B[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 else if((n*m+75<=k)&&(n*m+110>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<6) {cout<<B[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 else if((n*m+110<=k)&&(n*m+155>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<7) {cout<<B[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 else if((n*m+155<=k)&&(n*m+200>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<8) {cout<<B[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 else if((n*m+200<=k)&&(n*m+225>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<9) {cout<<B[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                     else if((n*m+225<=k)&&(n*m+260>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<7) {cout<<D[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                     else if((n*m+260<=k)&&(n*m+325>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<8) {cout<<D[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                     else if((n*m+325<=k)&&(n*m+405>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<9) {cout<<D[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 else if((n*m+405<=k)&&(n*m+505>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<7) {cout<<A[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 else if((n*m+505<=k)&&(n*m+605>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<8) {cout<<A[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                  else if((n*m+325<=k)&&(n*m*21>=k)&&n>4&&m>4)
                {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<10) {cout<<D[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
                                 /*
                                 else if(n*m*22<=k&&n*m*34>=k)
              {for(i=0;i<n;i++)
                {p=0;
                                 for(j=0;j<m;j++){if(c<14) {cout<<D[++p%4];c++;}else cout<<C[0];}
                                 cout<<endl;
                                 }
                                 }
              */
                else
                {
                p=0;
                    for(i=0;i<n;i++)
                    {if(p)p=0;else p=1;
                                    for(j=0;j<m;j++)
                    {if(p&&c<n*m){cout<<D[rand()%4];c++;}
                    else {cout<<A[rand()%4];}}
                    cout<<endl;
                    }}}
                return 0;
                }

