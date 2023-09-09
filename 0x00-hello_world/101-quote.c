/**
 * main - Print withou printf and puts
 *
 * Return: Always (1)
 */
#include <unistd.h>
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
