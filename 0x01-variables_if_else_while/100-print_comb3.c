#include <stdio.h>

/**
 * main - prints all different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	a = 48;
	b = 48;

	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				if (a == 57 && b == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar ('\n');
	return (0);
}
