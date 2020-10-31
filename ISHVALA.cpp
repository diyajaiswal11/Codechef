//https://www.codechef.com/submit/ISHVALA

#include <bits/stdc++.h>
using namespace std;

int main() {
		int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int N,M,X,Y,s;
	    cin>>N>>M>>X>>Y>>s;
	    int prev_x=0,prev_y=0,sum_x=0,sum_y=0;
	    for(int j=0;j<X;j++){
	        int x; cin>>x;
	        sum_x+=(x-prev_x-1)/s;
	        prev_x=x;
	    }
	    sum_x+=(N-prev_x)/s;
        for(int j=0;j<Y;j++){
	        int y; cin>>y;
	        sum_y+=(y-prev_y-1)/s;
	        prev_y=y;
	    }
	    sum_y+=(M-prev_y)/s;	    
	    
	    cout<<sum_x*sum_y<<endl;
	}

	return 0;
}
