#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string.
 * Return: string
 */

char *cap_string(char *s)
{
	int b = 0, c;
	int e[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (*(s + b) >= 'a' && *(s + b) <= 'z')
		*(s + b) = *(s + b) - ' ';
	count++;
	while (*(s + b) != '\0')
	{
		for (c = 0; c < 13; c++)
		{
			if (*(s + b) == e[c])
			{
				if ((*(s + (b + 1)) >= 'a') && (*(s + (b + 1)) <= 'z'))
					*(s + (b + 1)) = *(s + (b + 1)) - ' ';
				break;
			}
		}
		b++;
	}
	return (s);
}
