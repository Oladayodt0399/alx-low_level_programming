#include "main.h"
#include <stdio.h>
/**
 * print_line - draw a straight line in the terminal
 *@n: num of time the char should be printed
 *
 */

void print_line(int n)

{
	if (n <= 0)

	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
