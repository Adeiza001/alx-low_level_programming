#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if positive,zero ,negative
 *
 * Description: using the main function
 * this program prints "is positive ,is zero, is negative
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
       printf("% is positive\n", n);
}
else if (n ==0)
{
       printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}

