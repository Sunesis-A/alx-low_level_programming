#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
int string = 0;

	while (*str != '\0')
	{
		_putchar(*str[string]);
string++;
	}
		_putchar('\n');
}


