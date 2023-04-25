#include "main.h"
/**
 * print_sign - determines if the input number is greater, equal or less than 0
 * @n : input number as an integer
 * Return: 1 for greater, 0 for equal & -1 for less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
