#include "main.h"

/**
* print_rev - prints string in reverse
* @s: string
* Return: void
*/
void print_rev(char *s)
{
int i = 0;
int n;

while (*s != '\0')
{
i++;
s++;
}
s--;
for (n = i; n > 0; n--)
{
_putchar(*s);
s--
}
_putchar('\n');
}
