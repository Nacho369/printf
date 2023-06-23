#include "main.h"


/**
 * print_char - Prints a character
 *
 * @c: Character to be printed
 *
 * Return: The character printed to the stdout
 */
int print_char(char c)
{
	write(1, &c, 1);
}
