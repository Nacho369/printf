#include "main.h"


/**
 * p_char - Prints a character to the stdout
 *
 * @args_param: Character to print
 *
 * Return: 1 - on success, 0 - on error
 */
int p_char(va_list args_param)
{
	int ch = va_arg(args_param, int);

	print_char(ch);

	return (1);
}


/**
 * p_str - Prints a string to the stdout
 *
 * @args_param: String to print
 *
 * Return: Lenght of string
 */
int p_str(va_list args_param)
{
	int len = 0;
	char *str = va_arg(args_param, char *);

	if (str == NULL)
	{
		len = print_str("(null)");
		return (len);
	}

	len += print_str(str);

	return (len);
}
