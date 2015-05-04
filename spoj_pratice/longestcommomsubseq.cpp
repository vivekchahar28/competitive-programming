#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
long arr[4000][4000]={0};
long lcs(char s[],char t[],int i,int j)
{
if(i>=strlen(s)||j>=strlen(t))
    return 0;
if(s[i]==t[j])
{
    if(arr[i][j]==-1)
        arr[i][j]=lcs(s,t,i+1,j+1)+1;

return arr[i][j];
}
if(i<strlen(s)&&arr[i+1][j]==-1){
        arr[i+1][j]=lcs(s,t,i+1,j);
}
if(j<strlen(s)&&arr[i][j+1]==-1){
        arr[i][j+1]=lcs(s,t,i,j+1);
}
return max(arr[i+1][j],arr[i][j+1]);
}
main()
{
long long t;
char s[100000],s1[1000000];
scanf("%d",&t);
while(t--)
{
    scanf("%s%s",s,s1);

long long h=strlen(s1);
long long h1=strlen(s);
h=max(h,h1);
for(int i=0;i<h;i++)
    for(int j=0;j<h;j++)
    arr[i][j]=-1;
printf("%d\n",h-lcs(s,s1,0,0));
}
}
