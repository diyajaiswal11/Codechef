//Question Link: https://www.codechef.com/problems/FLOW009

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		double a,b,c=0.00000;
		cin>>a>>b;
		if(a>1000)
		c=(a*b)-((a*b)/10);
		else
		c=a*b;
		cout<<fixed<<setprecision(6)<<c<<endl;	
	}
}