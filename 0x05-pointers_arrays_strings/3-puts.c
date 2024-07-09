#include "main.h"

/**
 *_puts - prints a staing, followed by a newline to asdous
 *@str : good
 * Ester string parameter to print
 *Returnt Nothing
*/
void _puts(char *str)
{

	while (*str != '\0')

	{
		_putchar (*str + 0);
		str++;

	}


	_putchar('\n');
}
