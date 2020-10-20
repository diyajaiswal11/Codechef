//Question Link: https://www.codechef.com/problems/LAPIN

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
	   string s1,s2,s;
	   cin>>s;
	   int l=s.length();
	   s1=s.substr(0,l/2);
	   s2=s.substr(l%2!=0? (l/2)+1:l/2,l);
	   sort(s1.begin(),s1.end());
	   sort(s2.begin(),s2.end());
	   if(s1==s2)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	   
	}
}