#include<bits/stdc++.h>
using namespace std;
#define fastio()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void process(int t){
	while(t--){
		int n,k,c=0;
		cin >> n >> k;
		vector<int> v(n);
		if(n%2 == 0){
			for(int i=1; i<=n; i++){
				if(i%2 == 0){
					c++;
					v[i-1] = i;
				}
				else{
					v[i-1] =- i;
				}
			}
		} else {
			for(int i=1; i<=n; i++){
				if(i%2 != 0){
					c++;
					v[i-1] = i;
				}
				else{
					v[i-1] =- i;
				}
			}
		}
		if(k > c){
			for(int i=n-1; i>=0; i-=1){
				if(c == k){
					break;
				}
				if(v[i] < 0){
					v[i] =- v[i];
					c++;
				}
			}
		}
		if(k < c){
			for(int i=n-1; i>=0; i-=1){
				if(c == k){
					break;
				}
				if(v[i] > 0){
					v[i] =- v[i];
					c -= 1;
				}
			}
		}
		for(int i=0; i<n; i++){
			cout << v[i] <<" ";
		}
		cout << "\n";
	}
}

int main(){
	fastio();
	int t;
	cin>>t;
	process(t);
}
