#include "main.h"

/**
 * print_rev - display reverse string
 * @a: the string to be displayed
 */

void print_rev(char *a)
{
	int i = 0;

	while (a[i])
		i++;

	while (i--)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
