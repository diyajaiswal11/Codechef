#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll te; cin>>te; while(te--)
#define pa pair<ll,ll>


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0);
	tc
	{
		ll n, mini = INT_MAX, s = 0, ans = 0;
		vector <ll> v;
		map<ll, ll> map1, map2;
		cin >> n;
		ll a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			map1[a[i]]++;
		}
		for (int i = 0; i < n; i++)
			mini = min(mini, a[i]);
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			map2[b[i]]++;
		}
		for (int i = 0; i < n; i++)
			mini = min(mini, b[i]);
		for (int i = 0; i < n; i++)
		{
			if (map2[a[i]] > 0)
			{
				map2[a[i]]--;
				map1[a[i]]--;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (map1[a[i]] % 2)
			{
				s = 1;
				break;
			}
			if (map2[b[i]] % 2 )
			{
				s = 1;
				break;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (map1[a[i]] > 0)
			{
				v.push_back(a[i]);
				map1[a[i]]--;
			}
			if (map2[b[i]] > 0)
			{
				v.push_back(b[i]);
				map2[b[i]]--;
			}
		}
		sort(v.begin(), v.end());
		if (s == 1)
			cout << "-1" << endl;
		else
		{

			for (int i = 0; i < v.size() / 2; i += 2)
			{
				if (v[i] <= mini * 2)
					ans += v[i];
				else
					ans += (mini * 2);
			}
			cout << ans << endl;
		}
	}
}
