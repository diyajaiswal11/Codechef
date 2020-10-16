#include <bits/stdc++.h>
using namespace std;

#define For(i,a,b) for(int i=a;i<=b;++i)
int a[1111];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++) {
    

        int n;cin>>n;
        For(i,1,n)cin>>a[i];
        sort(a+1,a+n+1);
        int ans=0;
        For(i,1,n)ans+=a[i]-a[1];
        cout<<ans<<endl;
    }
    return 0;
}



