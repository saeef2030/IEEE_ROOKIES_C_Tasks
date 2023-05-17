#include <stdio.h>
float clc() 
{	int Size, i, sum = 0 ;
	float avg = 0;

	printf("Please Enter your Array size sir = ");
	scanf("%d", &Size);
    int arr[Size];
	printf("Enter your Array Elements sir :\n ");
	for (i = 0; i < Size; i++)
	{
        printf("%d. Enter number: ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < Size; i++)
	{
		sum = sum + arr[i];
	}
	avg = (float)sum / Size;
    return avg;
}
int main(){
    float x;
    x= clc();
    printf("\nThe Average of your Array Elements = %.2f", x);
}