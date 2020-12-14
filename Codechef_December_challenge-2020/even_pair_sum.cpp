#include<bits/stdc++.h>
using namespace std;
#define fastio()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void process(int t){
	while(t--){
		long long A, B, X0=0, X1=0, Y0=0, Y1=0;
		cin >> A >> B;
		if(A%2 == 0){
			X0 = A/2;
			X1 = A/2;
		}
		if(B%2 == 0){
			Y0 = B/2;
			Y1 = B/2;
		}
		if(A%2 != 0){
			X0 = A/2;
			X1 = A/2;
			X1++;
		}
		if(B%2 != 0){
			Y0 = B/2;
			Y1 = B/2;
			Y1++;
		}
		cout << (X0*Y0)+(X1*Y1) << "\n";
	}
}

int main(){
	fastio();
	
	int t;
	cin >> t;
	process(t);
}
