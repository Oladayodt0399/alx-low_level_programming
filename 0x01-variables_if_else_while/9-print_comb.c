#include <stdio.h>
/**
 * main - printing all possible combinations of single-digit numbers
 *
 * Return: always (0)
 *
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	if (i < 9)
	{
		putchar(',');
		putchar(' ');
	}
	return (0);
}
