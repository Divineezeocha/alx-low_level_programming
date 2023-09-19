#include <stdio.h>
/**
 * main - function to print numbers in base 16
 *
 * Return: Always (0)
 */
int main(void)
{
	char z = '0';
	char m = 'a';

	while (z <= '9')
	{
		putchar(z);
		z++;
	}
	while (m < 'g')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
