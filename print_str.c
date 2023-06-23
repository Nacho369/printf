#include "main.h"


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
