#include "main.h"

/**
 *rev_string - reverse a string
 *@s: string parameter input
 *Faturn: Nothing
*/

void rev_string(char *s)
{
	int l, i;

	char temp;

	/*find steing length without null chart*/

	for (l = 0; s[l] != '\0'; ++l)
		;

	/*Aavay the string by looping to half the string*/

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0°*/
		s[l - 1 — i] = temp;
	}
}
