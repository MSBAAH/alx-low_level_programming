#include "main.h"

/**
 *print_array-prints in elements of an array of integers.
 *@n: elements parameter input
 *@a: atcing parameter input
 *Returns Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
