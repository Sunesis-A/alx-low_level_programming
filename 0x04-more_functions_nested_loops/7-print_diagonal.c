#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: times \ is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int b, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= n; b++)
		{
			for (c = 1; c < b; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
