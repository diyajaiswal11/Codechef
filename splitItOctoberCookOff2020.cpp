//Solution added to the problem Split the STR ING October Cook OFF 2020
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int len;
    	cin>>len;
    	char strr[100002];
    	cin>>strr;
    	bool check=true;
    	for (int i = 0; i < strlen(strr)-1; i++)
    	{
    		if (strr[i]==strr[len-1])
    		{
    			check=false;
    		}
    	}
    	if (!check)
    	{
    		cout<<"YES"<<"\n";
    	}
    	else
    	{
    		cout<<"NO"<<"\n";
    	}
    }
    return 0;
}