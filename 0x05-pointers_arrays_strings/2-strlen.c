#include "main.h"
#include <stdio.h>

/**
* _strlen - Length of a string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
length++;
return (length);
}

