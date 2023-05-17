#include <stdio.h>
#define PI 3.14159
int main()
{ 
 float r;
 printf("Enter your radius sir: ");
 scanf("%f", &r);
 printf("The circumference of the circle is:%.2f", 2*PI*r);
 return 0;
}