#include "main.h"

/**
 * _memset - check the code
 *@s : good
 *@b: good
 *@n: the address of memory to print
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
