#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int Day1, Day2, v1, v2, prod, result = 0;
	cin >> Day1 >> v1 >> Day2 >> v2 >> prod;
	int i = 1;
	while(result < prod){
		if(i >= Day1){
			result += v1;
		}
		if(i >= Day2){
			result += v2;
		}
		i++;
	}
	cout << i-1 << "\n";
}
