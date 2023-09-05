#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, k, x = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			y++;
	}
	y += ac;

	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (k = 0; av[j][k]; k++)
	{
		str[x] = av[j][k];
		x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	}
	return (str);
}
