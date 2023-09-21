#include <stdio.h>
/**
 * main - function to print all single digits
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
			if (i <= '8')
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
