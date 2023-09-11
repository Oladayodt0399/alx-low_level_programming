#include <stdio.h>

/**
 * main -  program that print name of file it was compiled from
 * followed by a new line
 *
 * Return: (0)(success)
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
