#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int l, k = 0;

	for (l = 0; l < 64; l++)
	{
		if (l % 8 == 0 && l != 0)
		{
			k = l;
			_putchar('\n');
		}
		_putchar(a[l / 8][l - k]);
	}
	_putchar('\n');
}
