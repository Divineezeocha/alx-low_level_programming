#include <stdio.h>
/**
 * main - Function to print alphabet in lower case
 *
 * Return: Always (0)
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
