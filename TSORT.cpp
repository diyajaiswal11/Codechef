//Question Link: https://www.codechef.com/problems/TSORT

#include <iostream> 
#include<algorithm>
using namespace std;

int main()
{ 
int t;
cin>>t;
int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
sort(a,a+t);
for(int i=0;i<t;i++)
{
cout<<a[i]<<endl;
}
// your code goes here
	return 0;
}