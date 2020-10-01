#include <iostream>
using namespace std;

int main() {
   long long int t;
   cin>>t;
   for(long long int i=0;i<t;i++)
   {
   long long int ts,js=0;
   cin>>ts;
   long long int ts1=ts;
   if(ts%2==0)
   {
      while(ts1%2==0)
      {
         ts1=ts1/2;
      }
      js=ts1/2;
   }
    else
    {
       js=ts/2;
    }
    cout<<js<<endl;
   }
	return 0;
}
