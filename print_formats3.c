#include "main.h"


/**
 * print_rev_string - print char string in reverse
 *
 * @args_param: Arguments list
 *
 * Return: Length of string
 */
int p_rev_str(va_list args_param, int flag_id __attribute__((unused)))
{
	int indx, len = 0, size;
	char *str = va_arg(args_param, char *);

	for (size = 0; str[size]; size++)
		;

	for (indx = size - 1; indx >= 0; indx--)
		len += print_char(str[indx]);

	return (len);
}
