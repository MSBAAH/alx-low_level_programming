#include "main.h"

/**
 *_atoi-converts a string to an integer
 *@s: string input parametez
 *Return: converted integer from string
*/

int _atoi(char *s)
{

	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);

}
