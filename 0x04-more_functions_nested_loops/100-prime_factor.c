#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long int i, n;

	n = 612852475143;
	for (n = 2; n <= i; n++)
	{
		if (i % n == 0)
		{
			i /= n;
			n--;
		}
	}
	printf("%ld\n", n);
	return (0);
}
