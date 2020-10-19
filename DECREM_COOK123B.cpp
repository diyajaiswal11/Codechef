#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define f(i,a,n) for(int i=a ;i<n ;i++)
#define endl '\n'
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define F first
#define S second

using namespace std;

int main() {
    fast

	 ll t;
	 cin>>t;
	 while(t--)
	 {
		int l,r;
		cin>>l>>r;
		if(r>=2*l || l==1)
		{
			cout<<-1<<endl;
			continue;
		}
		else
		cout<<r<<endl;
	 }

	return 0;
}
