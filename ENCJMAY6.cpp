#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	 unordered_map<char, int> count;
    unordered_map<int, char> siz;
     int n, id;
    char a, b;
    cin >> n;
    vector <int> ans;
     for(int i=0;i<n;i++){
         cin>>id>>a>>b;
         siz[id]=a;
         count[b]++;
     }
     for(int i=0;i<n;i++){
         if(count[siz[i]]){
           count[siz[i]]--;
         }
         else{
         ans.push_back(i);
         }
     }
     if(ans.empty()){
         cout<<"YES"<<endl;
     }
     else{
         cout<<ans.size()<<endl;
         
         for(int x: ans){
             cout<<x<<" ";
         }
         cout<<endl;
     }
	}
	return 0;
}
