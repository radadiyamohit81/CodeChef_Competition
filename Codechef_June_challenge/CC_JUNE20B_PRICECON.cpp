#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k,sum = 0,sub = 0;
	cin >> n >> k;
	int p[n]={0};
	for(int i=0;i<n;i++){
		cin >> p[i];
		sum += p[i];
		if(p[i] >= k){
			sub += k;
		}
		else{
			sub += p[i];
		}
	}
	cout << (sum-sub) << "\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
