#include <stdio.h>
int main() 
{
    int n;
    printf("Please Enter your Square Array size sir =  ");
    scanf("%d", &n);
    printf("Please Enter your Square Array numbers sir :\n");


    int arr[n][n];
    for (int a=0; a<n; a++){
        for(int b=0; b<n ; b++){
            scanf("%d", &arr[a][b]);
        }
    }
    printf("Your Square Array is :\n");
   for(int a=0; a<n; a++) {
      for(int b=0;b<n;b++) {
         printf("%d ", arr[a][b]);
         if(b==2){
            printf("\n");
         }
      }
   }
   int d=0;
   for(int a=0; a<n; a++) {
      for(int b=0;b<n;b++) {
        if(a==b){
            d=d+arr[a][b];
        }

      }
   }

   for(int a=0; a<n; a++){
    int r=0;
    for(int b=0;b<n;b++){
        r=r+arr[a][b];
    }
    if(r!=d){
        printf("\nOOPS Your square is not a magic square. ");
        return 0 ;
    }

   }
   for(int a=0; a<n; a++){
    int c=0;
    for(int b=0;b<n;b++){
        c=c+arr[a][b];
    }
    if(c!=d){
        printf("\nOOPS Your square is not a magic square. ");
        return 0 ;
    }

   }
   printf("\nOhh Yeh Your square is a magic square."); 
}