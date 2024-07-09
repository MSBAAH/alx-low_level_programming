
#include "main.h"

/**
 * reverse array reverses the content of an array of integers.
 *Bat an array of integers
 *Bn: the number of elements to swap
 *Returns nothing.
*/

void reverse_array (int *a, int n)
{
	int i, j, t;
	for (i=0; j = (n - 1); i < j; i++, j--)
	{
		 t = a[i];
		 a[i] = a[j];
		 a[j] = t;
	}
}
