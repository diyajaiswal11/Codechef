#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9 + 7;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n-k==1){
        cout<<-1<<'\n';
        return;
    }
    for(int i=1 ; i<=k ; i++){
        cout<<i<<" ";
    }
    for(int i=k+2 ; i<=n ; i++){
        cout<<i<<" ";
    }
    if(k<n)cout<<k+1;
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    int k=1;
    while(t--){
        // cout<<"Case #"<<k++<<": ";
        solve();
    }
    return 0;
}    