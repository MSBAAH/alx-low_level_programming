#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	 n = rand();
	 m = n % 10 ;

	printf("The last digit of the random number is: %d", n % 10);
	if (m > 5)
	{
		printf("and is greater than 5\n");
	} else if (m == 0)
	{
		printf("and is 0\n");
	} else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
