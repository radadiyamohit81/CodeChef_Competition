#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int ts,a;
		cin >> ts;
		if(ts%2 == 0){
			while(ts%2 == 0){
				ts /= 2;
			}
			a = (ts-1)/2;
		} else{
			a = (ts-1)/2;
		}
		cout << a << "\n";
	}
	return 0;
}
