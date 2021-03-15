#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

class Solution{
	public:
	string process(int n, vector<int> v){
		sort(v.begin(),v.end());
		int flag = 0, result = 0;
		for(int i=1; i<=n; i++){
            if(v[i-1] > i){
                flag=1;
                break;
            }
            else{
                result += i - v[i-1];
            }
        }
        if(flag == 1 || result%2 == 0){
			return "Second";
		}else{
			return "First";
		}
	}
};

int main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		int n, no;
		cin >> n;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin >> no;
			v.push_back(no);
		}
		Solution obj;
		cout << obj.process(n, v) << "\n";
	}
	return 0;
}
