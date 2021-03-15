#include<bits/stdc++.h>
using namespace std;

void process(){
	int n;
	cin >> n;
	vector< pair<int, int> > p, s;
	for (int i = 0; i < n; i++) {
		int v;
		cin >> v;
		p.emplace_back(i + 1, v);
	}
	if (n == 2) {
		cout << "1\n";
	}else{
		s.push_back(p[0]);
		s.push_back(p[1]);
		int result = 1, sz = s.size();
		for (int i = 2; i < n; i++) {
			while (s.size() >= 2) {
				double s1 = ((double) s[sz - 1].second - (double) s[sz - 2].second) /
							((double) s[sz - 1].first - (double) s[sz - 2].first);
				double s2 = ((double) p[i].second - (double) s[sz - 1].second) /
							((double) p[i].first - (double) s[sz - 1].first);
				if (s1 <= s2) {
					s.pop_back();
					sz--;
				} else
					break;
			}
			s.push_back(p[i]);
			sz++;
			result = max(result, s[sz - 1].first - s[sz - 2].first);
		}
	}
	cout << result << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
    }
    return 0;
}
