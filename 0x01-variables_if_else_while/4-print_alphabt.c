#include <stdio.h>
/**
 * main - Function to print alphabets in lowercase except q and e
 *
 * Return: Always (0)
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		if (alphabets != 'q' && alphabets != 'e')
			putchar(alphabets);
	}
	{
		alphabets++;
	}
	putchar('\n');
	return (0);
}
