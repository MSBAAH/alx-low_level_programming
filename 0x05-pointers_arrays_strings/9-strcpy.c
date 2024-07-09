#include "main.h"

/**
 * *_strcpy-copses the string pointed to by wee
 *@dest: char type string
 *@src: char type string
 * Deseriptions Copy the string pointed to by pointer
 * are to the buffer pointed to by dast
 *Return:  Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
