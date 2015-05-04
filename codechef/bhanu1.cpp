#include <iostream>
#include<cstring>
using namespace std;
long long value;
int main() {
	int t;
	long long i,level;
    string str;
	cin >> t;
	while(t--) {
		cin >> str;
		value = level=1;
		for(i = 0; i<str.size() ; i++) {
			if(str[i] == 'l') {
				if(level%2) { //odd
					value = value*2;
				}
				else{ //even
					value = 2*value - 1;
				}
			}
			else if(str[i] == 'r') {
				if(level%2) { //odd
					value = 2*value + 2;
				}
				else{ //even
					value = 2*value + 1;
				}
			}
			level++;
			value %= 1000000007;
		}
		cout << value << endl;
	}
	return 0;
}
