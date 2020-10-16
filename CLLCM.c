#include <stdio.h>
#define z 1000
int main(void) {
// 	FILE *fp;
//     // For getting input from input0.txt file 
//     fp = freopen("input0.txt", "r", stdin); 
    
    // Change the input0.txt according to the number of files
    //   make sure to comment this out before submitting it to the online judge
    // Your code goes Here
	// your code goes here
	int t;
    long long int a[z]= {0},n,mul=1;
	scanf("%d",&t);
	while(t--)
	{
        scanf("%lld",&n);
        mul = 1;
	    for (int i = 0; i < n;i++)
	    {
	        scanf("%lld", &a[i]);
	        mul *= a[i];
	    }
	    if (mul %2 == 0)
	    {
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
    
    }
	
	return 0;
}
