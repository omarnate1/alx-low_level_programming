#include "main.h"

/**
 * puts2 - function that display one xter out of 2 strings
 * @str: string containing xters
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
