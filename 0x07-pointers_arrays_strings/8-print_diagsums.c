#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonal of a square matrix
 * @a: input
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int j, s1 = 0, s2 = 0;

	for (j = 0; j < (size * size); j++)
	{
		if (j % (size + 1) == 0)
			s1 += *(a + j);
		if (j % (size - 1) == 0 && j != 0 && j < size * size - 1)
			s2 += *(a + j);
	}
	printf("%d, %d\n", s1, s2);
}
