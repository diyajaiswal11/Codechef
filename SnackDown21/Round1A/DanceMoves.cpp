#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define int ll
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int dist = abs(y-x);
        //cout<<dist<<endl;
        int sl=0,sr;
        
        if(y<x){
            sl = x-y;
            sr = 0;
        }
        else if(x<y){
            //moonwalk until he reaches at a pos > y
            //8-3 = 5/2 =>2 sr > dist
            sr = (y-x+1)/2;
            if((2*sr)+x>y){
                //slide left
                sl++;
            }
        }

        int ans = sr+sl;
        if(x==y)cout<<0<<endl;else cout<<ans<<endl;
    }
}
