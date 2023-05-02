#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b != (n - 1))
			printf(", ");
	}
	printf("\n");
}
