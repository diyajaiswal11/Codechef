#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define MAX 1000000
#define mod 1000000007
#define ll long long int
#define ld long double
#define ull unsigned long long
#define li long int
#define str string
#define fr(i,n) for(ll i = 0; i<n; i++)
#define frj(j,i,n) for(ll j = i; j<n; j++)
#define frev(i,n) for(ll i = n-1; i>=0; i--)
#define all(x) x.begin(),x.end()
#define debug(x) cout << #x << " " << x << endl;
#define println(x) cout << x << "\n";
#define print(x) cout << x << " ";
#define printCase(x) cout << "Case #" << x << ": ";
#define umax(a, b) a=max(a,b);
 
template<class A> void read(vector<A>& v);
template<class T> void read(T& x) {
    cin >> x;
}
void read(double& d) {
    string t;
    read(t);
    d=stod(t);
}
void read(long double& d) {
    string t;
    read(t);
    d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
    read(h);
    read(t...);
}
 
template<class A> void write(A x) {
    cout << to_string(x);
}
template<class H, class... T> void write(const H& h, const T&... t) { 
    write(h);
    write(t...);
}
 
void solve() {
 
    ll n;
    read(n);
 
    string s;
    read(s);
 
    int c = 1, i = 1;
    ll ans = 0;
    vector<int> count;
    while (i < n){
        if (s[i] == s[i-1]) {
            c++;
        }
        else {
            count.push_back(c);
            c = 1;
        }
        ++i;
    }
    count.push_back(c);
 
    i = 0;
    int pos = -1;
    fr (i, count.size())
        if (count[i] > 1){
            pos = i;
            break;
        }
    if (pos == -1) {
        cout << ceil((float)n/2) << endl;
        // debug("yes\n+");
        return;
    }
 
    ans = 0;
    // debug(pos);
 
    fr (j, count.size()) {
 
        count[pos]--;
        ans++;
 
        if (pos == j || count[pos] == 1) {
 
            while (pos < count.size()) {
                pos++;
                if (count[pos] > 1)
                    break;
            }
            if(pos >= count.size()) {
                ans += ceil((float)(count.size()-j-1)/2);
                break;
            }
 
        }
 
    }
 
 
    cout << ans << endl;
 
 
    // fr (i, count.size()) 
    //     cout << count[i] << " ";
    // cout << endl;
 
 
}   
 
int main() {
    
    fastio;
    
    //Skipped in presense of online judge.
    #ifndef ONLINE_JUDGE
    freopen("D:/Competitive/inputf.in","r",stdin);
    freopen("D:/Competitive/outputf.in","w",stdout);
    #endif
    
    int t(1);
    cin >> t;
 
    frj(i, 1, t+1) {
        // printCase(i);
        solve();
    }
    
    return 0;
    
}
