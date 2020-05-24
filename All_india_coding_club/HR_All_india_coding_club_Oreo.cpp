#include<bits/stdc++.h>
using namespace std;

# define C continue;
# define R return

# define D double
# define I insert
# define ll long long
# define ld long double

# define ull unsigned long long
# define ui unsigned int

# define pb push_back
# define pf push_front

# define vi vector < int >
# define vc vector < char >
# define vs vector < string >
# define vb vector < bool >
# define vd vector < D >
# define vll vector < ll >
# define vull vector < ull >
# define vld vector < ld >
# define PQ priority_queue

# define vvi vector < vector < int > >
# define vvb vector < vector < bool > >
# define vvc vector < vector < char > >
# define vvs vector < vs >
# define vvll vector < vector < ll > >
# define vvd vector < vector < D > >
# define vvld vector < vector < ld > >

# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp

# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >

# define vpld vector < pld >
# define vpii vector < pii >
# define vpll vector < pll >
# define vpDD vector < pDD >

# define vvpii vector < vector < pii > >
# define F first
# define S second
# define mp make_pair

# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))

# define pp(n) printf("%.10Lf",n);
# define line cout<<"\n";
# define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);

const ll mod = 998244353;
const int LN = 20, N = 1e6;
int dp[N+100],n,a,q,x;

long long power(long long a, long long n){
    if(n == 0)return 1;
    if(n == 1)return a%mod;
    long long p = power(a,n>>1);
    p = p * p % mod;
    if(n & 1)p = p * a % mod;
    return p;
}
int main(){
	fast
    scanf("%d %d",&n,&q);
    long long inv = power(n,mod-2);
    for(int i = 1; i <= n; ++i){
        scanf("%d",&a);
        dp[a]++;
    }
    for(int i = 0; i <= LN; ++i){
        for(int mask = 0; mask <= N; ++mask){
            if((mask >> i)&1)continue;
            int nxt = (mask | (1 << i));
            if(nxt <= N)dp[nxt] += dp[mask];
        }
    }
    while(q--){
        scanf("%d",&x);
        printf("%lld\n",dp[x]*1LL*inv%mod);
    }
    return 0;
}
/* Test Case:   5 3
				1 2 3 4 5
				3
				4
				5
   Ans: 798595483
		598946612
		798595483
*/
