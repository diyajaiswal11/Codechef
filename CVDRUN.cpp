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
   int n,k,x,y;
   cin >> n >> k >> x >> y;
   vector<int>city;
   city.push_back(x);
   int val=(x+k)%n;
   while(val!=x)
   {
       city.push_back(val);
       val=(val+k)%n;
   }
   if(find(city.begin(),city.end(),y)!=city.end())
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




