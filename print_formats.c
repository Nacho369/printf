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

	print_char(ch); /* Function in the write_func.c file */

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
	len += print_str(str); /* Function in the write_func.c file */

	return (len);
}

/**
 * p_int - Prints an integer to the stdout
 *
 * @args_param: Inter valur to print
 *
 * Return: Lenght of character printed
 */
int p_int(va_list args_param)
{
	int len = 0;
	int num = va_arg(args_param, int);

	if (num == 0)
	{
		len += print_char('0'); /* Function in the write_func.c file */
		return (len);
	}

	if (num < 0)
	{
		print_char('-'); /* Function in the write_func.c file */
		num *= -1;
	}

	len += print_num(num); /* Function in the write_func.c file */
	return (len);
}
