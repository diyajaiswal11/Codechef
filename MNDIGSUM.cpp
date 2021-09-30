//Question Link:https://www.codechef.com/SEPT21B/problems/MNDIGSUM/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    fast;
    int t,n,l,r,s1,s2,m,n1;
    cin>>t;
    while(t--){
        cin>>n>>l>>r;
        if(n>=l&&n<=r){
            cout<<n<<endl;
            continue;
        }
        else if(n<l){
            cout<<l<<endl;
            continue;
        }
        else{
            s2=INT_MAX;
            m=0;
            while(l<r&&n/r<r){
                int t1=n/r,t2=n%r;
                if(s2>t1+t2){
                    s2=t1+t2;
                    m=r;
                }
                r=n/(t1+1);
            }
            while(l<=r){
                n1=n;
                s1=0;
                for(;;){
                    if(n1<l){
                        s1+=n1;
                        if(s1<s2){
                            m=l;
                            s2=s1;
                        }
                        break;
                    }
                    s1+=n1%l;
                    n1/=l;
                    if(s1>=s2)
                        break;
                }
                l++;
            }
            cout<<m<<endl;
        }
    }
	return 0;
}
