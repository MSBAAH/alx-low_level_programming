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
	 m = n % 10;

	if (m < 6 && m != 0)
	{
		printf("The last digit of %i is %i and is less than 6 and not 0\n", n, m);
	} else if (m == 0)
	{
		printf("The last digit of %i is %i and is 0", n,  n % 10);
	} else
	{
		printf("The last digit of %i is %i and is greater than 5\n", n, m);
	}

	return (0);
}
