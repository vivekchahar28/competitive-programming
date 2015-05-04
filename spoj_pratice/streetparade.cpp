#include<vector>
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
main()
{

    int n,i,dest=0,f=0,x;
    vector<int> order;
    cin>>n;
    while(n)
    {  order.clear();
         f=0;
            for(i=0;i<n;i++)
                {cin>>x;order.push_back(x);}



        stack<int> lane; int need = 1;
bool state = true;
for (int i = 0; i < order.size(); i++) {
	while (!lane.empty() && lane.top() == need) {
		need++;
		lane.pop();
	}
	if (order[i] == need) {
		need++;
	} else if (!lane.empty() && lane.top() < order[i]) {
		state = false;
		break;
	} else {
		lane.push(order[i]);
	}
}
if (state) cout << "yes" << "\n";
else cout << "no" << "\n";
        cin>>n;
        }
    return 0;
}
