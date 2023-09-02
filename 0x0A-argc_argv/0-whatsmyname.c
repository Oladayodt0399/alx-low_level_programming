#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 *
 * @argc: no of command line arguments
 * @argv: array that contains command line argument
 *
 * Return: (0) success
 */

int main(int agrc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
