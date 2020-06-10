#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,c5=0,c10=0,c15=0,as=1;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
        if(a[i] == 5){
            c5 = c5+1;
		}
        else if(a[i] == 10){
            if(c5 > 0){
                c5 = c5 - 1;
                c10 = c10 + 1;
			}
            else{
                as = 0;
                break;
			}
		}
        else{
            if(a[i] == 15){
                if(c10 > 0){
                    c10 = c10 - 1;
                    c15 = c15 + 1;
				}
                else if(c5 >= 2){
                    c5 = c5 - 2;
                    c15 = c15 + 1;
				}
                else{
                    as = 0;
                    break;
				}
			}
		}
	}
    if(as == 1){
        cout << "YES" <<"\n";
	}
    else{
        cout << "NO" <<"\n";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}


