#include "main.h"
/**
 * _islower - shows 1 if the input is lowercase character, else shpws 0
 * @c: the character in ascii code
 * Return: 1 for lowercase. 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
