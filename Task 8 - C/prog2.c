#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter your first number sir:");
scanf("%d", &num1);
printf("Enter your second number sir:");
scanf("%d", &num2);
printf("The sum of your numbers is:%d\n",num1+num2);
printf("The subtraction of your numbers is:%d\n",num1-num2);
printf("The multiplication of your numbers is:%d\n",num1*num2);
printf("The division of your numbers is:%.2f\n",(float)num1/num2);
}
