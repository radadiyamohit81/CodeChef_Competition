#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int i = 0,l = 0;
	while(1){
		if(i >= (s.length() - 1)){
            break;
		}
        if(s[i+1] != s[i]){
            l += 1;
            i += 1;
		}
        if(i >= (s.length() - 1)){
            break;
		}
        i += 1;
	}
	cout << l << "\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

