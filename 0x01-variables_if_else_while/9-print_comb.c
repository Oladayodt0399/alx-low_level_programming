#include <stdio.h>

/**
 * main - printing all possible combinations of single-digit numbers
 *
 * Return: always (0)
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		if (numbers <= '8')
		{

			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
