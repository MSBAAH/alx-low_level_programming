#include "main.h"

/**
 * _strncpy-A function that copies a string.
 *@dest: pointer to destination input buffer Barce pointer
 * to source input buffer 80: bytes of Barc
 *@n: pointer to destination input buffer Barce pointer
 *@src: int
 *Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*
	 * iterate through src array
	 * where if there is no null byte among the first n bytes of source
	 * the string placed in dest will not be *hull terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
