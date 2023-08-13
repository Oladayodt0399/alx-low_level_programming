#include <stdio.h>

/**
 * main - printing single-digit numbers in base 10
 *
 * Return: (0)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	putchar(digit + '0');
	digit++;
	}

	putchar('\n');
	return (0);
}
