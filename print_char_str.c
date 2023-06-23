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


/**
 * print_str - Prints a string
 *
 * @str: Pointer to string to be printed
 *
 * Return: Lenght of string printed
 */
int print_str(char *str)
{
	int indx;

	for (indx = 0; str[indx] != '\0'; indx++)
		print_char(str[indx]);

	return (indx);
}
