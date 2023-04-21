#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 18; n < 28; n++)
	{
		putchar(n);
		if (n != 27)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
