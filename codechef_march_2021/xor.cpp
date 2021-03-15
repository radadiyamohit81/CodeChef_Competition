#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

class Solution{
	public:
	long int process(long int n){
		long int super=0, mod=1;
		while(n >= super)	{
			super = pow(2,mod);
			mod++;
		}
		long int A = pow(2,mod-2) - 1;
		long int sub = super-n;
		long int result = A*(A + sub);
		return result;
	}
};

int main() {
	fast;
	long int t;
	cin>>t;
	while(t--){
		long int n;
		cin >> n;
		Solution obj;
		long int result = obj.process(n);
		cout << result << "\n";
	}
	return 0;
}
