#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - adds 2 numbers
 * @n1: 1st number.
 * @n2: 2nd number.
 * @r: buffer
 * @size_r: buffer size
 * Return: dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, o, b, d1, d2, dd = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= c2)
		b = a1;
	else
		b = a2;
	if (size_r <= b + 1)
		return (0);
	r[b + 1] = '\0';
	a1--, a2--, size_r--;
	d1 = *(n1 + a1) - 48, d2 = *(a2 + a2) - 48;
	while (b >= 0)
	{
		o = d1 + d2 + dd;
		if (o >= 10)
			dd = o / 10;
		else
			dd = 0;
		if (o > 0)
		*(r + b) = (o % 10) + 48;
		else
			*(r + b) = '0';
		if (a1 > 0)
			a1--, d1 = *(n1 + a1) - 48;
		else
			d1 = 0;
		if (a2 > 0)
			a2--, d2 = *(n2 + a2) - 48;
		else
			d2 = 0;
		b--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
