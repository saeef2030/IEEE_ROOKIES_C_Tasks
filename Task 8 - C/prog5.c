#include <stdio.h>
int main()
{
  int i,j=1,num;
  printf("Enter your number sir : ");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
      j=j*i;
 printf(" %d! = %d\n",num,j);
}