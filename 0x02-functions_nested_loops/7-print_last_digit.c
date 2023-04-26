#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: input number
 *Return: last digit
 */
int print_last_digit(int n)
{
	if ((n >= 0) $$ (n <= 9))
	{
		return (n);
	}
	else
	{
		n = _abs(n % 10);
		return (n);
	}
}
