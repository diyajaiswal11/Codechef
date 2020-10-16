/*---------Link for Question Statement -----------*/
https://www.codechef.com/OCT20B/problems/REPLESX
/*________________________________________________*/

#include<bits/stdc++.h>

#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
#define lli(n) long long n; cin>>n;
#define li(n) long n; cin>>n;
#define inti(n) int n;cin>>n;
#define CC int test;\
cin>>test;\
while(test--)

using namespace std;

int main()
{
FAST;
CC
{
    li(n);li(x);li(p);li(k);
    p--;k--;
    long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];


    sort(a,a+n);
    if(a[p]==x)
        cout<<"0\n";
    else if(p<=k && x<a[p])
    {
        int cx=-1;
        for(int i=0;i<p;i++)
        {
            if(a[i]<=x && a[i+1]>x)
            {
                cx=i;
                break;
            }
        }cout<<p-cx<<'\n';

    }else if(p>=k && x>a[p])
    {
        int cx = n;
        for(int i=n-1;i>p;i--)
        {
            if(a[i]>=x && a[i-1]<x)
            {
                cx=i;
                break;
            }
        }cout<<cx-p<<'\n';
    }else
        cout<<"-1\n";
}
return 0;
}
