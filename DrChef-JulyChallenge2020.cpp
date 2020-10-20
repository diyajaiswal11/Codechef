//Solution for July Long Challenge 2020
#include <bits/stdc++.h>
using namespace std;
#define pairii pair<int, int>
#define veci vector<int>
#define vecl vector<ll>
#define mapii map<int, int>
#define umapll unordered_map<ll, ll>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define set unordered_set
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define setbits(x) __builtin_popcountll(x)
#define leadzero(x) __builtin_clzll(x)
#define trailzero(x) __builtin_ctzll(x)
#define parity(x) _builtin_parityll(x)
#define mod 1000000007
#define inf 1e18
#define bitscount 32
#define pi 3.141592653589793
#define gold 1.618033988749895
#define maxInt INT_MAX
#define minInt INT_MIN
#define ps(x, y) fixed << setprecision(y) << x
#define mkarr(arr, n, type) type *arr = new type[n];
#define pw(b, p) pow(b, p) + 0.1
#define fastio                       \
    ios_base::sync_with_stdio(NULL); \
    cin.tie(NULL);                   \
    cout.tie(NULL);
#define t()   \
    int t;    \
    cin >> t; \
    while (t--)
#define read(x) scanf("%d", &x)
#define write(x) printf("%d\n", x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define looplong(i, n) for (ll i = 0; i < n; i++)
#define loopab(i, a, b) for (int i = a; i < b; i++)
#define looplongab(i, a, b) for (ll i = a; i < b; i++)
#define looplongnminusone(i, n) for (ll i = 0; i < n - 1; i++)
#define loopba(i, a, b) for (int i = a; i >= b; i--)
#define looplongba(i, a, b) for (ll i = a; i >= b; i--)
#define foreach(name) for (auto i = name.begin(); i != name.end(); i++)
#define endln "\n"
#define hcf(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b)) / (__gcd(a, b))
#define init(c, bytes) memset(c, 0, (bytes)) //c=container
#define initc(c, bytes) memset(c, '0', (bytes))
#define max(a, b) (a) > (b) ? (a) : (b)
#define min(a, b) (a) < (b) ? (a) : (b)
#define mid(start, end) (((end) - (start)) >> 1) + (start)

typedef long long ll;
typedef unsigned long long ull;

int32_t main()
{
    fastio
    t()
    {
        ll n, x;
        cin >> n >> x;
        vecl anson;
        looplong(i,n)
        {
            ll x;
            cin >> x;
            anson.push_back(x);
        }
        sort(anson.begin(), anson.end());
        ll flagt = 0;
        ll startIIndex;
        for (ll i = 0; i < n; i++)
        {
            if (anson[i] * 2 >= x)
            {
                startIIndex = i;
                break;
            }
        }
        for (ll i = startIIndex; i < n; i++)
        {
            while (x < anson[i])
            {

                flagt++;
                x = x * 2;
            }
            if (x < anson[i])
            {
                flagt += 2;
                x = anson[i] * 2;
            }
            else
            {
                flagt += 1;
                x = anson[i] * 2;
            }
        }
        cout << flagt + startIIndex <<endln;
    }
    return 0;
} 