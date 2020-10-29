#include<stdio.h>
#include<stdlib.h>

int breakingRecords()
{
  int n,i,ch=0,cl=0;
  scanf("%d",&n);
  int ar[n];
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
 //for max & min
 int max=ar[0],min=ar[0];
  for(i=1;i<n;i++)
  {
   if(max<ar[i])
    {
    max=ar[i];
    ch++;
    }
    if(min>ar[i])
    {
    min=ar[i];
    cl++;
    }
  }
  printf("%d %d",ch,cl);
  return 1;
}
int main()
{
  breakingRecords();
  return 1;
}
