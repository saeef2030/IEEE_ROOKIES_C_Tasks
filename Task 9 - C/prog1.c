#include<stdio.h>
int div(int *n1, int *n2)
{
    int z ,result;
    printf( "Entere your first number sir : " );
    scanf("%d", &*n1);
    printf( "Enter your second number sir: " );
    scanf("%d", &*n2);
    z=*n1%*n2;
    if (z==0)
    result=1;
    else
    result=0;
 return result;
}
int main()
{
    int x, y ,w;
    w=(div(&x,&y));
    if (w==1)
    printf("%d is divisible %d",x,y);
    else
    printf("%d is not divisible %d",x,y);
}