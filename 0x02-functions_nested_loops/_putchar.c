#include <unistd.h>
#include "alx.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to printe
 * 
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
