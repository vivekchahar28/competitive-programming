
#include<bits/stdc++.h>
using namespace std;
main()
{char maya[20][15] = {
	"S", ".", "..", "...", "....",
	"-", ". -", ".. -", "... -", ".... -",
	"- -", ". - -", ".. - -", "... - -", ".... - -",
	"- - -", ". - - -", ".. - - -", "... - - -", ".... - - -"
};
 char s[1000];
    while(1)
    {
        long long num=0,power=1,i,j;
        int n;
        cin>>n;
        if(!n)break;
        getchar();
       int pwr[7] = {1, 20, 360, 7200, 144000, 2880000, 57600000};
        for(j=n-1;j>=0;j--)
        {
            gets(s);
            for(i=0;i<20;i++)
            if(!strcmp(s,maya[i]))
                break;
            if(i)
                num+=pwr[j]*i;
        }
        cout<<num<<endl;
        gets(s);
    }
}
