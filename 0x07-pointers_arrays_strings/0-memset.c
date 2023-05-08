#include "main.h"
/**
 * _memset - fills memory with specific value
 * @s: memory
 * @b: specific value
 * @n: number of bytes to be changed
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
