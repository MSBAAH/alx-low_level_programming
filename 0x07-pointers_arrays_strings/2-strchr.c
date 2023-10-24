#include "main.h"
/**
 * _strchr - check the code
 *@s : h
 * @c : h
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');

}
