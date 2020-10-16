#include<bits/stdc++.h>
using namespace std;
void check(string s)
{
    int see=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' || s[i]=='1' && s[i+1]=='0' && s[i+2]=='1' )
        {
            see=1;
            break;
        }
    }
    see==1?cout<<"Good"<<endl:cout<<"Bad"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        check(s);
    }
}
