#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a script that prints numbers 0 - 9, and a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
