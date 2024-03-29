#include <stdio.h>
/**
 * main - function to print all possible combinations of two digit numbers
 *
 * Return: Always (0)
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i <= 99; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j <= 99; j++)
		{
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
