#include <stdio.h>
int main()
{	int Size, i ,j,x,n,t;
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
        n=arr[i];
        x=0;
        while(n>0){
            t=n%10;
            x=x*10+t;
            n=n/10;
        }
        if(x==arr[i])
        printf("\n %d is a palindrome",arr[i]);
        else
        printf("\n %d is not a palindrome",arr[i]);

    }
    return 0 ;
}

