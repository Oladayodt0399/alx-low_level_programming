#include "main.h"

/**
 * _puts - a function that prints string followed by new line to stdout
 * @str: string to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
