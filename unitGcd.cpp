///Solution to Unit GCD problem of April Long Challenge 2020..
#include <bits/stdc++.h>
using namespace std;
typedef long long int llt;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	llt t;
	cin>>t;
	while(t--)
	{
		llt n;
		cin>>n;
		if(n>=2)
		{
		cout<<n/2<<"\n";
		}
		else
		{
		    cout<<"1"<<"\n";
		}
		if(n%2==0)
		{
			for(llt i=1;i<=n;i=i+2)
			{
				cout<<"2 "<<i<<" "<<i+1<<"\n";
			}
		}
		else
		{
		    if(n>=3)
		    {
			cout<<"3 "<<"1 "<<"2 "<<"3"<<"\n";
			for(llt i=4;i<=n;i=i+2)
			{
				cout<<"2 "<<i<<" "<<i+1<<"\n";
			}
		    }
		    if(n==1)
		    {
		        cout<<"1 1"<<"\n";
		    }
		}
	}

	return 0;
}