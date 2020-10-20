//May Long Challenge 2020 Solution for Problem Chef and Bitwise Product..
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll x, y, l, r;

ll con(int ind,bitset<64>&arr)
{
    ll ans = 0;
    for(ll i=0;i<ind;i++)
    {
            ans += (1LL << i);
    }
    for(ll i=ind+1;i<64;i++)
    {
        if(arr[i] == 1) ans+=(1LL << i);
    }
    return ans;
}

int chnge_of_index(int ind,bitset<64>& arr)
{
    ll res = 0;
    int j = -2;
    for (ll i = ind; i >= -1; i--)
    {
        if(i > 0)
        if(arr[i] == 0) {
            continue;
        }
        ll ans1 = con(i,arr);
        ll ans = (y & ans1) * (x & ans1);
        if(ans > res)
        {
            res = ans;
            j = i;
        }
    }
    return j;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Test;
    cin >> Test;
    while(Test--)
    {
        cin >> x >> y >> l >> r;
        bitset<64>a(l);
        bitset<64>b(r);
        bitset<64>c(x);
        bitset<64>e(y);
        bitset<64>arr(r);
        ll ind = -1;

        for(int i = 63; i >= 0; --i)
        {
            if(b[i] == 1 && a[i] == 0)
            {
                ind = i;
                break;
            }
        }
        if(ind == -1)
        {
            cout << l << endl;
        }
        else if(x == 0 || y == 0){
            cout << l << endl;
        }
        else
         {
            int mx = chnge_of_index(ind,arr);
            if (mx == -2) 
            {
             cout << l << endl;
            }
            else if(mx == -1)
            {
             cout << arr.to_ulong() << endl;
            }
            else
            {
                arr[mx] = 0;
                if (mx == ind)
                {
                    bool flag = false;
                    for ( int i = mx-1; i >= 0; --i)
                    {
                        if(c[i] == 1 || e[i] == 1) 
                        arr[i] = 1;
                        else arr[i] = 0;
                        if(flag) continue;
                        if (arr[i] == 1 && a[i] == 0) flag = true;
                        else arr[i] = a[i];
                    }
                }
                else
                {
                    for (int i = mx-1; i >= 0; --i)
                    {
                        if(c[i] == 1 || e[i] == 1) arr[i] = 1;
                        else arr[i] = 0;
                    }
                }
                ll ans = con(-1,arr);
                cout << ans << endl;
            }
        }
    }
    return 0;
}