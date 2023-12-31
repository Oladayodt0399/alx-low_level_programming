#include <stdio.h>
/**
 * main -  printing all possible different combinations of three digits
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int digit_1, digit_2, digit_3;

	digit_1 = 0;

	while (digit_1 <= 7)
	{
		digit_2 = digit_1 + 1;

		while (digit_2 <= 8)
		{
			digit_3 = digit_2 + 1;

			while (digit_3 <= 9)
			{
				putchar(digit_1 + '0');
				putchar(digit_2 + '0');
				putchar(digit_3 + '0');

				if (digit_1 != 7)
				{
					putchar(',');
					putchar(' ');
				}

				digit_3++;
			}

			digit_2++;
		}

		digit_1++;
	}

	putchar('\n');
	return (0);
}
