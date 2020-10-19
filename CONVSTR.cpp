// https://www.codechef.com/LTIME84B/problems/CONVSTR

/*
    Only way to go is UP 
    H1s3nb3rg's Here !!
*/
#define _USE_MATH_DEFINES
#include <bits/stdc++.h> 
#include <cmath>
using namespace std;
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rep(i,b,e) for(__typeof(e)i=(b)-((b)>(e));i!=(e)-((b)>(e));i+=1-2*((b)>(e)))
#define repa(i,x)  for(auto i:x)
#define vin(x) for(auto &i:x){cin>>i;}
#define vin1(x) for(ll i=1;i<x.size();i++){cin>>x[i];}
#define dbg(x) for(auto i:x){cout<<i<<" ";}cout<<ENDL;
typedef long long ll;
typedef unsigned long long ull;
#define ENDL "\n"
#define VALL(a) a.begin(),a.end()
typedef vector<ll> vll;
typedef long double ld;
typedef pair<int,int> pi;
typedef uint64_t i64;
#define ff first
#define ss second
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vector<ll>> v2ll;
#define sz(x) (int)x.size()
const int MOD = 1e9+7;
#define MP(a,b) make_pair(a,b)
#define ff first
#define ss second
#define ret0 return 0;
#define ret return;
/*----------------------------*/


void solver(){
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    rep(i,0,n){
        if(a[i]<b[i]){
            cout<<-1<<ENDL;
            ret;
        }
    }
    unordered_map<char,vector<ll>> mp;
    map<char,vector<ll>,greater<char>> mod;
    rep(i,0,n)
        mp[a[i]].push_back(i);
    rep(i,0,n){
        if(a[i]!=b[i]){
            mod[b[i]].push_back(i);
        }
    }
    v2ll ans;
    for(auto i:mod){
        vll a;
        if(mp.find(i.ff)==mp.end()){
            cout<<-1<<ENDL;
            return;
        }
        a.push_back(mp[i.first][0]);
        for(auto j:i.ss)
            a.push_back(j);
        ans.push_back(a);
    }
    cout<<ans.size()<<ENDL;
    for(auto i:ans){
        cout<<i.size()<<" ";
        for(auto j:i)
            cout<<j<<" ";
        cout<<ENDL;
    }
    ret;
}


int main(){
    FAST_IO;
    ll tc;
    cin>>tc;
    while(tc--)
        solver();
    ret0;
}
