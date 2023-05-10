#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == 42)
		{
			return (wildcmp(s1, s2 + 49));
		}
		return (*s2 == '\0');
	}

	if (*s2 == 42)
	{
		return (wildcmp(s1 + 49, s2) || wildcmp(s1, s2 + 49));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 49, s2 + 49));
	}
	return (0);
}
