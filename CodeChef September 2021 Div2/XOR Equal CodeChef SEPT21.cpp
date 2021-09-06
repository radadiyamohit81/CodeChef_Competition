#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

void process(){
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	unordered_map<int,int> umap;
	int mx = 1;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		if(umap.find(arr[i]) != umap.end()){
			umap[arr[i]]++;
		}else{
			umap[arr[i]] = 1;
		}
		mx = max(mx, umap[arr[i]]);
	}
	
	unordered_map<int,int> nt;
	
	for(int i = 0; i < n; i++){
		int sub_res = arr[i]^x;
		if(sub_res == arr[i]) continue;
		if(nt.find(sub_res) != nt.end()){
			nt[sub_res]++;
		}else{
			nt[sub_res] = 1;
		}
	}
	int operations = 0;
	for (auto item: nt)
	{
		if(umap.count(item.first) > 0){
			if(nt[item.first] + umap[item.first] > mx){
				mx = nt[item.first] + umap[item.first];
				operations = nt[item.first];
			}else if(nt[item.first] + umap[item.first] == mx){
				operations = min(operations, nt[item.first]);
			}
		}
	}
	cout << mx << " " << operations;
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

