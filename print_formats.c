#include "main.h"

/**
 * p_char - Prints a character to the stdout
 *
 * @args_param: Character to print
 *
 * @flag_id: Index of flag specifier
 *
 * Return: 1 - on success, 0 - on error
 */
int p_char(va_list args_param, int flag_id __attribute__((unused)))
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
 * @flag_id: Index of flag specifier
 *
 * Return: Lenght of string
 */
int p_str(va_list args_param, int flag_id __attribute__((unused)))
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
 * @flag_id: Index of flag specifier
 *
 * Return: Lenght of character printed
 */
int p_int(va_list args_param, int flag_id)
{
	int len = 0;
	unsigned int num;
	int n = va_arg(args_param, int);

	if (n < 0)
	{
		len += print_char('-'); /* Function in the write_func.c file */
		num = n * -1;
	}
	else
	{
		num = n;

		if (num == 0)
		{
			if (flag_id == 0)
			{
				len += print_str("+0");
				return (len);
			}
			else if (flag_id == 1)
			{
				len += print_str(" 0");
				return (len);
			}
			else
			{
				len += print_char('0');
		}
		else
		{
			if (flag_id == 0)
				len += print_char('+');
			else if (flag_id == 1)
				len += print_char(' ');
		}
	}
	len += print_num(num);

	return (len);
}

/**
 * p_unsignedint - Prints an unsigned integer to the stdout
 *
 * @args_param: Integer value to print
 *
 * @flag_id: Index of flag specifier
 *
 * Return: Length of character printed
 */
int p_unsignedint(va_list args_param, int flag_id __attribute__((unused)))
{
	unsigned int len = 0;
	unsigned int num = va_arg(args_param, int);

	if (num == 0)
	{
		len += print_char('0'); /* Function in the write_func.c file */
		return (len);
	}

	len += print_num(num);

	return (len);
}

/**
 * p_octalint - Convert and Prints an octal integer to the stdout
 * @args_param: Integer in base 10 to convert to octal
 *
 * @flag_id: Index of flag specifier
 *
 * Return: Length of characters printed
 */
int p_octalint(va_list args_param, int flag_id)
{
	int n = va_arg(args_param, int);
	unsigned int num, t_num, buf_indx, buf_len, len = 0, oct = 8;
	char *buf;

	if (n < 0)
	{
		num = n * -1;
		num = ~num + 1;
	}
	else
		num = n;

	if (num < 8)
	{
		len += print_char(num + 48);
		return (len);
	}

	t_num = num;

	for (buf_len = 0; t_num != 0; buf_len++)
		t_num /= oct;

	buf = malloc(sizeof(char) * buf_len + 1);
	if (buf == NULL)
		return (0);

	t_num = num;
	for (buf_indx = (buf_len - 1); t_num != 0; buf_indx--)
	{
		buf[buf_indx] = (t_num % oct) + '0';
		t_num /= oct;
	}

	buf[buf_len] = '\0';
	len += print_str(buf);
	free(buf);

	return (len);
}
