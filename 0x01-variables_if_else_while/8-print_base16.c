#include <stdio.h>
/**
 * main -  printing the numbers of base 16 in lowercase
 *
 *Return: always (0) (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}

	putchar('\n');

	return (0);
}
