#include <unistd.h>

/**
 * _putchar - function to print character to standard output
 * @c: character value
 * Return: write 1, character, 1 to standard output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
