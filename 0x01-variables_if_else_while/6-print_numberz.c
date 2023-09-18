#include <stdio.h>
/**
 * main - Function to print single number of base 10
 *
 * Return: Always (0)
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
