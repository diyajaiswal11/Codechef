#include<stdio.h>
#include<conio.h>
#include<unistd.h>
 #include<sys/types.h>
clrscr();
 void childprocess(unsigned long long int k)
 {
 	int v;
 	int a=0;
 	int b=1;
 	for (int j=0;j<k;j++){
 		if (j<=1){
 			v=j;
 		}
 		else{
 			v=a+b;
 			a=b;
 			b=v;
 		}
 		printf("%d ",v);
 	}
 	printf("\n");
 }

 	
 void main(void)
 {
 	pid_t pid;
 	unsigned long long int i;
 	scanf("%lld",&i);
 	pid=fork();
 	//t=getpid();
 	if (pid==0){
 		printf("Child process is calling Fibonacci\n");
 		childprocess(i);
 		printf("Child process has ended\n");
 	}
 	else{
 		printf("This is parent process\n Parent process has ended\n");
 	
 	}
 }
 	
