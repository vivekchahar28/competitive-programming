#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void mult(ll (*matrix_jassi)[6],ll (*A)[6]){
	ll C[6][6];
	memset(C,0,sizeof(C));
		for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			for(int k=1;k<=5;k++){
				C[i][j]+=(matrix_jassi[i][k]*A[k][j]);
				C[i][j]%=matrix_jassiOD;
			}
		}
	}
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
			matrix_jassi[i][j]=C[i][j];
}

void init(ll (*matrix_jassi)[6]){

	matrix_jassi[1][2]=1;
	matrix_jassi[2][3]=1;
	matrix_jassi[3][4]=1;
	matrix_jassi[4][5]=1;
	matrix_jassi[5][1]=1;
	matrix_jassi[5][2]=2;
	matrix_jassi[5][3]=1;
	matrix_jassi[5][4]=1;
	matrix_jassi[5][5]=1;

}

ll a,b,c,d,e;
ll power(ll n){

	ll result_array[6][6];
	ll matrix_jassi[6][6];
	memset(matrix_jassi,0,sizeof(matrix_jassi));
    memset(result_array,0,sizeof(result_array));
	init(matrix_jassi);
	for(int i=1;i<=5;i++)
		result_array[i][i]=1;

	while(n){

		if(n&1)
			mult(result_array,matrix_jassi);
		n/=2;
		mult(matrix_jassi,matrix_jassi);
	}
	ll ans=(result_array[1][1]*a + b*result_array[1][2] + c*result_array[1][3] + d*result_array[1][4] + e*result_array[1][5])%matrix_jassiOD;
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>a>>b>>c>>d>>e>>n;
		n++;
    cout<<power(n-1)<<endl;
	}
	return 0;
}
