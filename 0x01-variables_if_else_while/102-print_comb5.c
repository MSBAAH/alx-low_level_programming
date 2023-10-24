#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
        int digit = 0 , digit2 ;
        while (digit <= 99)
        {
                digit2 = digit;
                while (digit2 <= 99)
                {
                        if(digit < digit2 && digit != digit2)
                        {
                                putchar((digit / 10) + 48);
                                putchar((digit % 10 ) +48);
				putchar(' ');
				putchar((digit2 / 10) + 48);
                                putchar((digit2 % 10 ) +48);
                                if (digit != 98 || digit2 != 99 )
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                        digit2++;
                }
                digit++;
        }
        putchar('\n');
        return (0);
}
