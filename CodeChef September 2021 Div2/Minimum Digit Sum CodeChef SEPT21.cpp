#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

void process(){
	int n, l, r;
	cin >> n >> l >> r;
	int minVal = INT_MAX;
	int ans = -1;
	if(r > n){
		cout << r;
	}else if(l < n && n < r){
		cout << n;
	}else{
		for(int i = r; i >= l; i--) {
			if(minVal == 1) break;
			int sum = 0, temp = n;
			while(temp > 0){
				sum += temp % i;
				temp /= i;
				if(sum > minVal) break;
			}
			if(minVal > sum){
				ans = i;
				minVal = sum;
			}
		}
		cout << ans;
	}
}

int main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		process();
		cout << "\n";
	}
}
