#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef double db;

typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef pair<pii, int> piipi;
typedef pair<int, pii> pipii;
typedef pair<pii, pii> piipii;
typedef pair<ll, pii> plpii;
typedef pair<ld, ld> pdd;

typedef vector<int> vi;
typedef vector<pii> vii;

#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define FOR2(i, a, b) for(int i=(a);i<=(b);++i)
#define ROF(i, a, b) for(int i=(b)-1;i>=(a);--i)
#define ROF2(i, a, b) for(int i=(b);i>=(a);--i)
#define GO(i, x) for(auto &i : x)

#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define eb emplace_back
#define pf push_front
#define pb push_back
#define lb lower_bound
#define up upper_bound

const int mod = 1e9 + 7;
// const int mod = 998244353 // ntt mod
const int P1 = 999983, P2 = 999979;
const ld PI = acos((ld)-1);
const int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
const ll INF = 1e18;
const int N = 2000;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

struct ft{
    int ft[N+5];
    void init(){
        memset(ft, 0, sizeof(ft));
    }
    void update(int i, int v){
        for(;i<=N;i+=(i&-i)){
            ft[i] += v;
        }
    }
    int query(int i){
        int res = 0;
        for(;i>0;i-=(i&-i)) res+=ft[i];
        return res;
    }
}ft;

ll dp1[2005][2005], dp2[2005][2005];
int a[2005];
int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    vector<int> d;
    FOR(i, 1, n+1) scanf("%d", &a[i]), d.eb(a[i]);
    sort(all(d));
    d.erase(unique(all(d)), d.end());
    FOR(i, 1, n+1) a[i] = lb(all(d), a[i]) - d.begin() + 1;

    FOR(l, 1, n+1){
        ft.init();
        FOR(i, l+1, n+1){
            dp1[l][i] = ft.query(a[i]-1);
            if(a[i] < a[l]) ft.update(a[i], 1);
        }
    }
    ROF(r, 1, n+1){
        ft.init();
        ROF(i, 1, r){
            dp2[r][i] = ft.query(a[i]-1);
            if(a[i] < a[r]) ft.update(a[i], 1);
        }
    }
    FOR(i, 1, q+1){
        int l, r;
        scanf("%d%d", &l, &r);
        ll ans = 0;
        FOR2(i, l, r) ans = (ans + dp1[l][i]*dp2[r][i]);
        printf("%lld\n", ans);
    }
}
