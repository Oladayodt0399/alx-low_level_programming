#include <stdio.h>
/**
 * main - printing the alphabet in lowercase without q and e
 *
 * Return: (0)
 *
 */
int main(void)
{
	char Lower = 'a';

	while (Lower <= 'z')
	{
		if (Lower != 'q' && Lower != 'e')
		{
			putchar(Lower);
		}
		Lower++;
	}

	putchar('\n');
	return (0);
}
