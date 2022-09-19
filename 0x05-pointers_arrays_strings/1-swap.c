#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function to swap integer values
 * @t: integer to be replaced
 * @s: integer to be replaced with
 * Return: 0
 */

void swap_int(int *t, int *s)
{
	int a;

	a = *t;
	*t = *s;
	*s = a;
}
