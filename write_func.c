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


/**
 * print_num - Prints an integer value
 *
 * @num: Integer value to print
 *
 * Return: Lenght of number;
 */
int print_num(int num)
{
	int iter, ld, len, size;
	int num_len = num;
	char ch, *buf;

	for (len = 0; num_len > 0; len++)
		num_len /= 10;

	buf = malloc(sizeof(char) * (len + 1));

	if (buf == NULL)
		return (0);

	size = len;

	for (iter = 0; num > 0; iter++)
	{
		ld = num % 10;
		ch = ld + '0';
		--size;
		buf[size] = ch;
		num /= 10;
	}

	buf[len] = '\0';

	for (iter = 0; buf[iter] != '\0'; iter++)
		print_char(buf[iter]);

	return (len);
}
