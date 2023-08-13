#include <stdio.h>
/**
 * main -  printing all single digit numbers of base 10 from 0
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int alphabets = '0';

	while (alphabets <= '9')
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
