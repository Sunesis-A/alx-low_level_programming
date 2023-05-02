#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: string
 */
void _puts(char *str)
{
int string = 0;

	while (*string != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}


