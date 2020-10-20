// Question Link: https://www.codechef.com/problems/FLOW006

#include <iostream>
using namespace std;

int main() {
    int a,b,t;
    cin>>t;
    while (t--)
    {
        int  sum=0;
        cin>>a;
        while (a!=0){
        b=a%10;
        sum=sum+b;
        a=a/10;}
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}