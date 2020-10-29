#include <stdio.h>
#include <stdlib.h>
int size=0;
struct location
{
  int item;
  struct location *address;
};
typedef struct location *location;

location create()
{
  location newnode;
  newnode=(location)malloc(sizeof(struct location));
  return newnode;
}

location insertfront(location head,int cost)
{
  location temp;
  temp=create();
  temp->address=NULL;
  temp->item=cost;
  temp->address=head;
  head=temp;
  return head;
}

location deletefront(location head)
{
  location cur;
  if(head == NULL)
  printf("Empty\n");
  else
  {
  cur=head;
  head=head->address;
  free(cur);
  }
  return head;
}

void display(location head)
{
  location cur;
  int pos=1;
  if(head==NULL)
  printf("Nothing is there\n");
  else
  {
  cur=head;
  while(cur!=NULL)
  {
    printf("%d=[%d]\t",pos,cur->item);
    cur=cur->address;
    pos++;
  }
  printf("\n");
  }
}
void displayrev(location head)
{
  location cur;
  cur=head;
  if(cur!=NULL)
  {
    displayrev(cur->address);
    printf("[%d]\n",cur->item);

  }
}
void main()
{
  location head=NULL;
  int choice,cost;
  for(;;)
  {
  printf("Enter your choice \n1.Insert Front \t2.Delete Front \t3.Display \t4.Display reverse\n(press any other key to exit)\n");
  scanf("%d",&choice);
  switch (choice)
  {
    case 1:printf("Enter the cost\n");
           scanf("%d",&cost);
           head=insertfront(head,cost);
           display(head);
           break;
    case 2:head=deletefront(head);
           display(head);
           break;
    case 3:display(head);
           break;
    case 4:displayrev(head);
          break;
    default:exit(0);
  }
}
}
