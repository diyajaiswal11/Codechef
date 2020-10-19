// https://www.codechef.com/problems/TRPLSRT

#include <bits/stdc++.h> 
using namespace std;
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef uint64_t i64;
#define ENDL "\n"
#define VALL(a) a.begin(),a.end()
typedef vector<ll> vll;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vector<ll>> v2ll;
#define sz(x) (int)x.size()
#define MP(a,b) make_pair(a,b)
const int MOD = 1e9+7;
/*--------------------------------------*/


ll fc(vector<ll> &v,ll n)
{
    if(v[n]<0)
        return n;
    return v[n]=fc(v,v[n]);
}

void uni(vector<ll> &v,ll a,ll b)
{
    ll x=fc(v,a);
    ll y=fc(v,b);
    if(x==y)
        return;
    v[x]+=v[y];
    v[y]=x;
    return;
}

void cycshift(ll *a,ll *b,ll *c){
    ll tmp=*a;
    *a=*c;
    *c=*b;
    *b=tmp;
}

void solver(){
    ll n,k;
    cin>>n>>k;
    vll dsu(n+1,-1);
    vll el(n+1,0);
    for(ll i=0;i<n;i++){
        ll t;
        cin>>t;
        el[i+1]=t;
        uni(dsu,i+1,t);
    }
    ll od=0,ev=0;
    for(ll i=1;i<=n;i++){
        if(dsu[i]<0 && abs(dsu[i])%2==0)
            ev++;
        else if(dsu[i]<0 && abs(dsu[i])%2!=0)
            od++;
    }
    if(ev%2!=0){
        cout<<-1<<ENDL;
        return;
    }
    vector<ll> oddcycle;
    vector<ll> evencycle;
    vector<ll> vis(n+1,0);
    // detect cycles
    for(ll i=1;i<=n;i++){
        if(el[i] != i){
        if(dsu[i]<0 && abs(dsu[i])%2!=0){
            ll st=i;
            oddcycle.push_back(st);
            while(true){
                if(vis[st]==1)
                    break;
                vis[st]=1;
                st=el[st];
                oddcycle.push_back(st);
            }
            oddcycle.pop_back();
        }
        if(dsu[i]<0 && abs(dsu[i])%2==0){
            ll st=i;
            evencycle.push_back(st);
            while(true){
                if(vis[st]==1)
                    break;
                vis[st]=1;
                st=el[st];
                evencycle.push_back(st);
            }
            evencycle.pop_back();
        }
        }
    }
    // solve
    vll anszz;
    while(oddcycle.size()!=3 && oddcycle.size()>3)
    {   
        anszz.push_back(oddcycle[oddcycle.size()-3]);
        anszz.push_back(oddcycle[oddcycle.size()-2]);
        anszz.push_back(oddcycle[oddcycle.size()-1]);
        //cout<<oddcycle[oddcycle.size()-3]<<" "<<oddcycle[oddcycle.size()-2]<<" "<<oddcycle[oddcycle.size()-1]<<ENDL;
        ll a=el[oddcycle[oddcycle.size()-3]];
        ll b=el[oddcycle[oddcycle.size()-2]];
        ll c=el[oddcycle[oddcycle.size()-1]];
        cycshift(&a,&b,&c);
        el[oddcycle[oddcycle.size()-3]]=a;
        el[oddcycle[oddcycle.size()-2]]=b;
        el[oddcycle[oddcycle.size()-1]]=c;
        vll st;
        if(oddcycle[oddcycle.size()-3] !=a)
            st.push_back(oddcycle[oddcycle.size()-3]);
        if(oddcycle[oddcycle.size()-2] !=b)
            st.push_back(oddcycle[oddcycle.size()-2]);
        if(oddcycle[oddcycle.size()-1] !=c)
            st.push_back(oddcycle[oddcycle.size()-1]);
        oddcycle.pop_back();oddcycle.pop_back();oddcycle.pop_back();
        for(auto i:st)
            oddcycle.push_back(i);
    }
    if(oddcycle.size()==3)
    {
        anszz.push_back(oddcycle[0]);
        anszz.push_back(oddcycle[1]);
        anszz.push_back(oddcycle[2]);
        //cout<<oddcycle[0]<<" "<<oddcycle[1]<<" "<<oddcycle[2]<<endl;
    }
    while(evencycle.size()!=3 && evencycle.size()>3)
    {   
        anszz.push_back(evencycle[evencycle.size()-3]);
        anszz.push_back(evencycle[evencycle.size()-2]);
        anszz.push_back(evencycle[evencycle.size()-1]);
        //cout<<evencycle[evencycle.size()-3]<<" "<<evencycle[evencycle.size()-2]<<" "<<evencycle[evencycle.size()-1]<<ENDL;
        ll a=el[evencycle[evencycle.size()-3]];
        ll b=el[evencycle[evencycle.size()-2]];
        ll c=el[evencycle[evencycle.size()-1]];
        cycshift(&a,&b,&c);
        el[evencycle[evencycle.size()-3]]=a;
        el[evencycle[evencycle.size()-2]]=b;
        el[evencycle[evencycle.size()-1]]=c;
        vll st;
        if(evencycle[evencycle.size()-3] !=a)
            st.push_back(evencycle[evencycle.size()-3]);
        if(evencycle[evencycle.size()-2] !=b)
            st.push_back(evencycle[evencycle.size()-2]);
        if(evencycle[evencycle.size()-1] !=c)
            st.push_back(evencycle[evencycle.size()-1]);
        evencycle.pop_back();evencycle.pop_back();evencycle.pop_back();
        for(auto i:st)
            evencycle.push_back(i);
    }
    if(evencycle.size()==3)
    {
        anszz.push_back(evencycle[0]);
        anszz.push_back(evencycle[1]);
        anszz.push_back(evencycle[2]);
        //cout<<evencycle[0]<<" "<<evencycle[1]<<" "<<evencycle[2]<<endl;
    }
    if(anszz.size()/3<=k){
        cout<<anszz.size()/3<<ENDL;
        for(ll i=0;i<anszz.size();i+=3)
            cout<<anszz[i]<<" "<<anszz[i+1]<<" "<<anszz[i+2]<<" "<<ENDL;
    }
    else{
        cout<<-1<<ENDL;
        return;
    }
    return;
}

 int main(){
    FAST_IO;
    ll tc;
    cin>>tc;
    while(tc--){
        solver();
    }
    return 0;
 }
