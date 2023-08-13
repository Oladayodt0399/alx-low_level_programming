#include <stdio.d>
/**
 * main - printing all possible combinations of two two-digit numbers
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int num1_1, num1_0, num2_1, num2_0;

	num1_1 = 0;
	num1_0 = 0;

	while (num1_1 <= 9)
	{
		while (num1_0 <= 9)
		{
			num2_1 = num1_1;
			num2_0 = num1_0 + 1;

			while (num2_1 <= 9)
			{
				while (num2_0 <= 9)
				{
					putchar(num1_1 + '0');
					putchar(num1_0 + '0');
					putchar(' ');
					putchar(num2_1 + '0');
					putchar(num2_0 + '0');

					if (!(num1_1 == 9 && num1_0 == 8 && num2_1 == 9 && num2_0 == 9))
					{
						putchar(',');
						putchar(' ');
					}
					num2_0++;
				}
				num2_1++;
				num2_0 = 0;
			}
			num1_0++;
		}
		num1_1++;
		num1_0 = 0;
	}
	putchar('\n');
	return (0);
}
