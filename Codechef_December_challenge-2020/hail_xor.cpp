#include <bits/stdc++.h>
using namespace std;
#define fastio()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long ll;
#define vi vector<int>
#define vii vector<vector<int> >

void process(int t){
	while(t--){
		ll n, x, i, j, k, p, f=0, sum=0;
		cin >> n >> x;
		
		ll a[n];
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		vii v(n, vi(33, 0)); 
		for(i=0; i<n; i++)
		{
			p = a[i];
			j = 0;
			while(p > 0)
			{
				v[i][j++] = p%2;
				p /= 2;
			}
		}

		for(i=0; i<n; i++)
		{
			for(j=32; j>=0; j--)
			{
				if(x>0 && v[i][j]==1)
				{
					f=0;
					for(k=i+1; k<n-1; k++)
					{
						if(v[k][j] == 1)
						{
							f = 1; v[k][j] = 0; v[i][j] = 0;
							x--;
							break;
						}
					}
					if(f==0 && x>0 && i!= n-1)
					{
						v[i][j] = 0; v[n-1][j] ^= 1;
						x--;
					}
				}
			}
		}

		for(i=0; i<n; i++)
		{
			sum = 0;
			for(j=0; j<33; j++)
			{
				sum += v[i][j]*(1<<j);
			}
			a[i] = sum;
		}

		if(x>0)
		{
			if(x%2==1)
			{
				if(n == 2)
				{
					a[n-1]^=1;
					a[n-2]^=1;
				}
			}
		}
		for(i=0; i<n; i++)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	fastio();
	int t;
	cin >> t;
	process(t);
}
