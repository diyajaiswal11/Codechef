/*---------------October Cookoff Problem B-----------------*/
#include<bits/stdc++.h>

#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
#define lli(n) long long n; cin>>n;
#define li(n) long n; cin>>n;
#define inti(n) int n;cin>>n;
#define CC int test;\
cin>>test;\
while(test--)

using namespace std;

int main()
{
FAST;
CC
{
    inti(l);inti(r);
    // if l<=r-l, mod function will give a value 
    // less than the length of the segment
    // and the condition will neve be satisfied
    if(l<=r-l)
        cout<<"-1\n";
    else{
    // the answer always exist in this case and is always equal to r
        cout<<r<<'\n';
    }
}
return 0;
}
