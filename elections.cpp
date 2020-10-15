#include<bits/stdc++.h>
using namespace std;
 
int main(){
     long long int n,i,m=0,s=0,a;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a;
          m=max(m,a);
          s+=a;
     }
     cout<<max(2*s/n+1,m);
     return 0;
}
