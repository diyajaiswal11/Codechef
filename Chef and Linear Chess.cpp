#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	 while(t--){
	      int n, k;
	      cin>>n>>k;
	      int a[n];
	      for(int i=0; i<n; i++)
	       cin>>a[i];
	       
	       int m=INT_MAX;
	        int res=-1;
		        for(int i=0;i<n;i++){
		            if(k%a[i]==0){
		                int q=k/a[i];
		                if(q<m){
		                    m=q;
		                    res=a[i];
		                }
		                
		            }
		        }
		        cout<<res<<endl;
	 }
	return 0;
}
