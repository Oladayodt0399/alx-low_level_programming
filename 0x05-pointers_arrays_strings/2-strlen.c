#include "main.h"

/**
 * _strlen - standard library that provides similar function: strlen
 * @s: string
 * Return: length
 */

int _strlen(char *s)

{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
