#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string.
 * Return: s.
 */

char *rot13(char *s)
{
	int n = 0, l;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + n) != '\0')
	{
		for (l = 0; l < 52; l++)
		{
			if (*(s + n) == alphabet[l])
			{
				*(s + n) = rot13[l];
				break;
			}
		}
		n++;
	}

	return (s);
}
