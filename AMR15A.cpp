//Question Link: https://www.codechef.com/problems/AMR15A

#include <iostream>
using namespace std;

int main() {
    int n,c1=0,c2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]!=0 && a[j]%2==0)
        {
        c1++;
        }
    else
       {
        c2++;
       }
    }
    if(c1>c2)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    } 
	// your code goes here
	return 0;
}
