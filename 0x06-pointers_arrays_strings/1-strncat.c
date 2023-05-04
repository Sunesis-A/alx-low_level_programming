#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: bytes.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[z] = src[z];
	for ( ; z < n; z++)
		dest[z] = '\0';

	return (dest);
}
