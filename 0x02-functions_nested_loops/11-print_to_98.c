#include "main.h"

/**
 * main - check the code
 * print_to_98
 * @n :input
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
