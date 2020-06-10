#include<bits/stdc++.h>
using namespace std;
void process(){
	int n,in = 0;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j] = ++in;
		}
	}
	if(n%2 == 0){
		int y=0;
		for(int i=0;i<(int)n/2;i++){
			int g = i+1;
			int k=g*n - 1;
			int s = a[g][k];
			for(int j=0;j<n;j++){
				a[g][y++] = s--;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		process();
	}
	return 0;
}
