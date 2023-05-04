#include "mainn.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: buffer size.
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int c, d, e;

	if (size <= 0)
		printf("\n");
	else
	{
		for (c = 0; c < size; c += 10)
		{
			printf("%.8x:", c);
			for (d = c; d < c + 10; d++)
			{
				if (d % 2 == 0)
					printf(" ");
				if (d < size)
					printf("%.2x", *(b + d));
				else
					printf("  ");
			}
			printf(" ");
			for (e = c; e < c + 10; e++)
			{
				if (e >= size)
					break;
				if (*(b + e) < 32 || *(b + e) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + e));
			}
			printf("\n");
		}
	}
}
