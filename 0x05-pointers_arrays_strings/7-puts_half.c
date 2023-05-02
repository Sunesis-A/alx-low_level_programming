#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int b, e, i;

	i = 0;

	for (b = 0; str[b] != '\0'; b++)
		i++;

	e = (i / 2);

	if ((i % 2) == 1)
		e = ((i + 1) / 2);

	for (b = e; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}

