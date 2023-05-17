#include <stdio.h>
int main()
{
 float num;
 printf("Enter you number sir: ");
 scanf("%f", &num);
 if (num > 0.0)
        printf("Your number is positive");
    else if (num < 0.0)
        printf("Your number is negative");
    else
        printf("Oh sir you entered 0");
 return 0;
}