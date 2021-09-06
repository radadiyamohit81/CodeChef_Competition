#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

void process(){
	int n, a, b;
	string s;
	cin >> n >> a >> b;
	cin >> s;
	int l = s.length();
	int zeros = 0, ones = 0;
	for (int i = 0, j = l-1; i < l/2 || j >= l/2 ; i++, j--)
	{
		if(s[i] == '0' && i < l/2) zeros++;
		else if(s[i] == '1' && i < l/2) ones++;
		
		if(s[j] == '0') zeros++;
		else if(s[j] == '1') ones++;
	}
	cout << (a*zeros + b*ones);
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

// Complexity:  O(Log(n))

