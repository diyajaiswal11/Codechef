#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 
#define pb push_back 
const lln MOD=1000000007; 

void solve(){
    lln x,y;
    cin>>x>>y;
    lln z=x+y;
    if(abs(z)%2==0){
        cout<<"YES \n";
        return;
    }
    cout<<"NO \n";
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lln t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}