#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 10 times the nums, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)

{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				putchar('1');
			putchar (j % 10 + '0');
		}
		putchar('\n');
	}
}
