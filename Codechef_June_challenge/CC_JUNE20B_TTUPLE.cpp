#include<bits/stdc++.h>
using namespace std;
void process(){
	int p,q,r;
	int a,b,c;
	cin >> p >> q >> r;
	cin >> a >> b >> c;
	int s,t,u,v,w,x;
	s = a-p;
	t = b-q;
	u = c-r;
	int tot=0;
	if(s == t || s == u){
		if(t != 0)t -= s;
		if(u != 0)u -= s;
		s = 0;
		if(t == 0 || u == 0)tot++;
	}
	else if(t == s || t == u){
		if(s != 0)s -= t;
		if(u != 0)u -= t;
		t = 0;
		if(s == 0 || u == 0)tot++;
	}
	else if(u == s || u == t){
		if(s != 0)s -= u;
		if(t != 0)t -= u;
		u = 0;
		if(s == 0 || t == 0)tot++;
	}
	if(s != 0){
		tot++;
	}else if(t != 0){
		tot++;
	}else if(u != 0){
		tot++;
	}
	cout << tot <<"\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		process();
	}
	return 0;
}
