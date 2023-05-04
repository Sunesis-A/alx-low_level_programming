#include "main.h"
/**
 * leet - encode into 1337
 * @n: value
 * Return: n
 */
char *leet(char *n)
{
	int j, p;
	char i1[] = "aAeEoOtTlL";
	char i2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[j] == i1[p])
			{
				n[j] = i2[p];
			}
		}
	}
	return (n);
}

