#include "main.h"

/**
 * _atoi - converts to an int
 * @s: string
 * Return: converted int
 */
int _atoi(char *s)
{
	unsigned int c = 0, s = 0, i = 0, n = 1, b = 1, a;

	while (*(s + c) != '\0')
	{
		if (s > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;

		if (*(s + c) == '-')
			n *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (s > 0)
				b *= 10;
			s++;
		}
		c++;
	}

	for (a = c - s; a < c; a++)
	{
		i = i + ((*(s + a) - 48) * b);
		b /= 10;
	}
	return (i * n);
}
