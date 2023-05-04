#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @c: string
 *
 * Return: c
 */
char *string_toupper(char *c)
{
	int m;

	m = 0;
	while (c[m] != '\0')
	{
		if (c[m] >= 'a' && c[m] <= 'z')
			c[m] = c[m] - 32;
		m++;
	}
	return (c);
}
