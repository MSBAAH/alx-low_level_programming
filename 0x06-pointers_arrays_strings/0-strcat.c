#include "main.h"

/**
 *strcat-function that concatenates two strings.
 *@dest: pointer to destnation input @src: pointer to source input
 *Return: pointer to resulting string @dest
*/

char strcat(char *dest, char *SIC)
{
	int c, c2;
	C = 0;     /*find the size of dest array*/
	while (dest [c])
		c++;
	/*iterate through each are array value without the null byte*/
	for (c2 = 0; src[c2]; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest [C++] = src[c2];
	return (dest);
}
