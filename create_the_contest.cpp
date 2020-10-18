// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve()
{
    //write your code here
    lli n;
    cin >> n;
    vector<lli>arr(n);
    for(lli i=0;i<n;i++)
    cin >> arr[i];
    int count=1,val=arr[0],ma=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=2*arr[i-1])
        count++;
        else
        {
            ma=max(count,ma);
            count=1;
        }
    }
    ma=max(count,ma);
    cout << ma << "\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




