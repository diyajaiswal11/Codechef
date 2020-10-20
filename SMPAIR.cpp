//Problem Link: https://www.codechef.com/problems/SMPAIR

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,t,add=0;
	cin>>t;
	while(t--)
	{
	   cin>>n;
	   long int a[n];
	   for(int i=0; i<n; i++)
	   cin>>a[i];
	   sort(a,a+n);
	   add= a[0]+a[1];
	   cout<<add<<endl;
	}
	return 0;
}