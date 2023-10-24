#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int aa, b, c;

	for (aa = 0; aa <= 9; aa++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = aa * b;
			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
