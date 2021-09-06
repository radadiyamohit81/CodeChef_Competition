#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long

void process(){
	int n;
	cin >> n;
	vector<ll> arr(n);
	for (int i = 0; i < n; i++){ cin >> arr[i]; }
	
	int encnt,oncnt,eacnt=0,oacnt=0;
	encnt = n/2;
	if(n%2 == 0){ oncnt = n/2; }
	else{ oncnt = (n/2)+1; }
	
	//~ for (int i = 0, j = n-1; i < n/2 || j >= n/2 ; i++, j--)
	//~ {
		//~ if(arr[i]%2 == 0 && i < n/2){ eacnt++; }
		//~ else{ oacnt++; }
		
		//~ if(arr[j]%2 == 0){ eacnt++; }
		//~ else{ oacnt++; }
	//~ }
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			eacnt++;
		}
		else{
			oacnt++;
		}
	}

	int res1 = min(encnt,oacnt);
	int res2 = min(eacnt,oncnt);
	cout << (res1 + res2);
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
