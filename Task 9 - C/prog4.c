#include<stdio.h>
int main()
{
   int arr[3][3];
   int i=0, j=0;
   while(i<3) 
   {
      while(j<3) 
      {
         printf("Enter your number sir [%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
       j++;
      }
      i++;
      j=0;
   
   }
   printf("Your array is :\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", arr[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}