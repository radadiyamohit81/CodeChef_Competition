#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

class Solution{
	public:
	int process(int n,int e,int h,int a,int b,int c){
		vector<int> res;
		vector<int> v;
		
		for(int i=0; i<=n; i++)v.push_back(i);
		
		for (int i = 0; i <= n; i++) {
			int id1 = lower_bound(v.begin(), v.end(), (2 * n - e - 2 * i)) - v.begin();
			int id2 = upper_bound(v.begin(), v.end(), (h - 3 * i)) - v.begin() - 1;
			if (id2 < id1 || id1 == n + 1)
				continue;
			if (id2 == n + 1 && (id2 + 3 * i) > h)
				continue;
			int k;
			if (c > a)
				k = (id1 < (n - i) ? id1 : (n - i));
			else
				k = (id2 < (n - i) ? id2 : (n - i));

			int o = n - k - i;
			if (k + 2 * i >= 2 * n - e && k + 3 * i <= h) {
				res.push_back(a * o + b * i + c * k);
			}
		}
        if(res.empty()){
			return -1;
        }else{
            int min = res[0];
            for(int i=0; i<res.size(); i++){
                if(res[i] < min)
                {
					min=res[i];
				}
            }
            return min;
        }
	}
};

int main(){
	fast;
	int t;
	cin >> t;
	while(t--){
		int n,e,h,a,b,c;
		cin >> n >> e >> h >> a >> b >> c;
		Solution obj;
		cout << obj.process(n,e,h,a,b,c) << "\n";
	}
	return 0;
}
