#include<stdio.h>
int main()
{
 int i, arr[5];
 printf("Enter your 5 numbers sir :\n");
 while (i < 5)
 {
     printf("arr[%d] = " , i );
     scanf("%d", &arr[i]);
     i++;
 }

 printf("Your Array is:\n");
 for (i=0; i< 5; i++)
 {
     printf(" %d  ", arr[i] );
 }
 return 0;
}