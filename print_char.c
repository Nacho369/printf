#include "main.h"


/**
 * print_char - Prints a character
 *
 * @c: Character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
