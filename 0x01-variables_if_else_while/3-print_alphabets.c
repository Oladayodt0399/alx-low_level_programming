#include <stdio.h>
/**
 * main - printing the alphabet in lowercase and  uppercase
 *
 * Return: (0)
 *
 */
int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'z')
	{
		putchar(Upper);
		Upper++;
	}
	return (0);
}
