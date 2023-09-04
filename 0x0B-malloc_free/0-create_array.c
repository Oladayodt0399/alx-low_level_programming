#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 *and initializes it with a specific char.
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < size; r++)
	{
		ptr[r] = c;
	}
	return (ptr);
}
