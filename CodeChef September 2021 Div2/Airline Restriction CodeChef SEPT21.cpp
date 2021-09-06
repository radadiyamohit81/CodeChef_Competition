#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

void process(){
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	if((a+b<=d && c<=e)|| (b+c<=d && a<=e)|| (a+c<=d && b<=e)) 
	{
		cout << "YES";
	}else{
		cout << "NO";
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
