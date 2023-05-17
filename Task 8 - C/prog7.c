#include <stdio.h>
int main()
 {
  int x, i, j = 0;
  printf("Enter your number sir: ");
  scanf("%d", &x);
  if (x == 0 || x == 1)
    j = 1;
  for (i = 2; i <= x / 2; ++i) 
  {
    if (x % i == 0) 
    {
      j = 1;
      break;
    }
  }
  if (j == 0)
    printf("%d is a prime number.", x);
  else
    printf("%d is not a prime number.", x);
  return 0;
}