#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: times \ is printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, c;

		for (b = 1; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				if (b == c)
				_putchar('\\');
				else if (c < b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
