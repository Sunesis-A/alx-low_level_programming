#include <stdio.h>

/**
 * main - prints 0 - 9
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	puchar('\n');
	return (0);
}
