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
    string s;
    cin >> s;
    stack<char>sr;
    sr.push(s[0]);
    for(int i=1;i<s.size();i++)
    {
        if(sr.empty()) sr.push(s[i]);
        else
        {
            if(sr.top()=='B' && s[i]=='B') sr.pop();
            else if (sr.top() == 'A' && s[i] == 'B')
            {
                sr.pop();
            }
            else
            {
                sr.push(s[i]);
            }
        }
    }
    cout << sr.size() << "\n";
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





