#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if input is a digit or not
 * @c: input character
 * Return: 1 if a digit, otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= '0' && c < '10'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
