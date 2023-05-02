#include "main.h"
/**
 * _puts - prints a string
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


