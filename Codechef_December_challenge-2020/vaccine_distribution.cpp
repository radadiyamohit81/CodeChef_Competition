#include<bits/stdc++.h>
using namespace std ;
#define fastio()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long ll;

void process(int t){
	while(t--){
		ll N, D, X0 = 0, X1 = 0;
		cin >> N >> D;
		for(ll i=0; i<N; i++){
			ll temp;
			cin >> temp;
			if(temp >= 80 || temp <= 9){
				X0++;
			}
			else{
				X1++;
			}
		}
		ll ans_X0 = (X0%D == 0  ?  (X0/D): (X0/D) + 1);
		ll ans_X1 = (X1%D == 0  ?  (X1/D): (X1/D) + 1);
		ll result = ans_X0 + ans_X1;
		cout << result << "\n";
	}
}

int main(){
	fastio();
	int t;
	cin >> t;
	process(t);
}
