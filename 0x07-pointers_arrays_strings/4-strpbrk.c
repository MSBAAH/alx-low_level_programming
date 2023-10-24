#include "main.h"

/**
 * _strpbrk - check the code
 * @s : h
 * @accept : h
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int itr,  jtr;

	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
