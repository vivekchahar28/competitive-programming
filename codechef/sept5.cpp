#include<bits/stdc++.h>
using namespace std;
int A[100000];
int n,k;
main(){
 cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>A[i];


	vector<int> common_diff,temp(n+1);
	int a=INT_MAX,diff;
	set<int> ST;
	if(k){

		if(n>=30){
			for(int i=2;i<=n;i++)
				ST.insert(A[i]-A[i-1]);
		}
		else{

			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					ST.insert((A[j]-A[i])/(j-i));
				}
			}
		}

		while(!ST.empty())
            {
			common_diff.push_back(*ST.begin());
			ST.erase(ST.begin());
		}

		for(int i=1;i<=k+1;i++){
			for(int j=0;j<common_diff.size();j++){

				temp[i]=A[i];
				int idx=i-1;
				int d=common_diff[j];
				while(idx>=1){
					temp[idx]=temp[idx+1]-d;
					idx--;
				}
				idx=i+1;
				while(idx<=n){
					temp[idx]=temp[idx-1]+d;
					idx++;
				}
				int c=0;
				for(int l=1;l<=n;l++){
					if(temp[l]!=A[l])
						c++;
				}
				if(c<=k){
					if(a>temp[1]){
						a=temp[1];
						diff=d;
					}else if(a==temp[1]){
						diff=min(diff,d);
					}
				}
			}
		}
	}else{
		a=A[1];
		diff=A[2]-A[1];
	}

	for(int i=1;i<=n;i++){
		printf("%d ",a);
		a+=diff;
	}
	printf("\n");
	return 0;
}
