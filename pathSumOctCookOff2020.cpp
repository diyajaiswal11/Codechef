//Solution of Problem  Path-etic Sums for October CookOFF 2020..
#include <bits/stdc++.h>
using namespace std;
int arr[107];
vector<int> adj[107];
void dfs(int s,int p,int y){
	arr[s]=y;
	for(auto x:adj[s]){
		if(p!=x){
			if(y==1)dfs(x,s,2);
			else dfs(x,s,1);
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,i,a,b;
		cin>>n;
		for(i=1;i<=n;i++){
			arr[i]=0;
			if(!adj[i].empty())adj[i].clear();
		}
		for(i=0;i<n-1;i++){
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		dfs(1,-1,1);
		for(i=1;i<=n;i++)cout<<arr[i]<<" ";
		cout<<"\n";
	}
	return 0;
}