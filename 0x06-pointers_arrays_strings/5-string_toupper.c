/**
 * *string_toupper - function that changes
 * all lowercase letters of a string to uppercase.
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
<<<<<<< HEAD
	if (n[i] >= 'a' && n[i] <= 'z')
	n[i] = n[i] - 32;
	i++;
=======
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
>>>>>>> 19f57595478e03d2d8a68bfe79713589bfbf21bc
	}
	return (n);
}
