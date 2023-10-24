#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @n: the address of memory to print
 * @src: the size of the memory to print
 *@dest : hi
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
