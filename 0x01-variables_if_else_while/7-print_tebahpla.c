#include <stdio.h>

/**
 * main - Prints alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
