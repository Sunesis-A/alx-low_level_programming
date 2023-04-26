#include <stdio.h>
/**
 * main - prints the add of the Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%1d, %1d", n1, n2);
	for (a = 0; a < 48; a++)
	{
		fn = n1 + n2;
		printf(", %1d", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
