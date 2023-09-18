#include <stdio.h>
/**
 * main - Function to print alphaets in lowercase and uppercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char alphabets = 'a';
	char alphabet = 'A';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	while (alphabets <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
