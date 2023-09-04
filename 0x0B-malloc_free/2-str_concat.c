#include "main.h"
#include "stdlib.h"
/**
 * *str_concat - function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: pointer to the srting which memory is allocated to
 */
char *str_concat(char *s1, char *s2)
{
	size_t a, b, j, k;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}
	ptr = malloc(sizeof(char) * (a + b + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (j = 0; j < a; j++)
	{
		ptr[j] = s1[j];
	}
	for (k = 0; k <= b; k++)
	{
		ptr[j] = s2[k];
		j++;
	}
	return (ptr);
}
