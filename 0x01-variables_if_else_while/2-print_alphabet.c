#include <stdio.h>
/**
 * main - printing lowercase alphabet using only the putchar function
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
