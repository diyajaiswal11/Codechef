//https://www.codechef.com/submit/PPSUM

#include <iostream>
using namespace std;

int sum(int n){
	    return n*(n+1)/2;
}

int main() {
	int t;
	std::cin >> t;

	
	for (int i=0; i<t; i++){
	    
	    int D, N;
	    cin >> D >> N;
	    
	    int ans =sum(N);
	    
	    for(int j=0; j<D-1; j++){
	        
	       ans=sum(ans) ;
	    }
	    
	    std::cout << ans << std::endl;
	}
	return 0;
}
