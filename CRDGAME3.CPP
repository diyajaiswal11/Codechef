#include <iostream>
using namespace std;

int main() {
	int t;
	 cin>>t;
	 while(t--){
	 	int a, b;
	 	cin>>a>>b;
	 	int acnt=0, bcnt=0;
	 	if(a%9==0)
	    	 acnt+=a/9;
	 	 else
	 	     acnt+=a/9+1;
	 	 if(b%9==0)
	       	 bcnt+=b/9;
	     else
	 	     bcnt+=b/9+1;
	 	     
	 	  if(acnt==bcnt)
	 	     cout<<"1 "<<bcnt<<endl;
	 	  else  if(acnt>bcnt)
	 	    cout<<"1 "<<bcnt<<endl;
	 	  else 
	 	    cout<<"0 "<<acnt<<endl;
	 }
	return 0;
}
