#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long int lld;

struct node
{
	struct node *left;
	unsigned long long int n;
	struct node *right;
}node;

void addnode(struct node **,lld ,lld ,lld);
void search(struct node *,lld *,lld);

lld sumdigits(lld no) 
{ 
   return no == 0 ? 0 : no%10 + sumdigits(no/10) ; 
} 

int main()
{
	lld T,N,D,p[2];
	scanf("%llu",&T);
	
	while(T--)
	{
		scanf ("%llu %llu",&N,&D);
		p[0]=N;
		p[1]=0;
		struct node *root=NULL;
		addnode (&root,N,D,0);
		search(root,p,0);
		printf ("%llu %llu\n",p[0],p[1]);
	}
	
	return 0;
}

void addnode(struct node **pt,lld N,lld D,lld c)
{
		
	if(c>20)//condition for recursion break
		return ;
		
	if((*pt)==NULL)
	{
		(*pt)=(struct node *)malloc(sizeof(node));
		(*pt)->n=N;
		(*pt)->left=NULL;
		(*pt)->right=NULL;
	}
			
	addnode(&(*pt)->left,sumdigits(N),D,c+1);
	addnode(&(*pt)->right,(N+D),D,c+1);
		
}

void search(struct node *pt,lld *p,lld c)
{
	if(pt!=NULL)
	{
		search(pt->left,p,c+1);
		if(pt->n < p[0])
		{
			p[0]=pt->n;
			p[1]=c;
		}
		else if ((pt->n == p[0]) && (c<p[1]))
			p[1]=c;
			
		search(pt->right,p,c+1);
	}
}
