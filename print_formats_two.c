#include "main.h"

/**
 * p_binaryint - Convert and Prints the unsigned integer to the stdout
 * @args_param: Integer in base 10 to convert to binary
 *
 * Return: Length of characters printed
 */
int p_binaryint(va_list args_param)
{
	int n = va_arg(args_param, int);
	unsigned int num, t_num, buf_indx, buf_len, len = 0, bin = 2;
	char *buf;

	if (n < 0)
	{
		num = n * -1;
		num = ~num + 1;
	}
	else
		num = n;

	num = n;

	if (num < bin)
	{
		len += print_char(num + 48);
		return (len);
	}
	t_num = num;

	for (buf_len = 0; t_num != 0; buf_len++)
		t_num /= bin;

	buf = malloc(sizeof(char) * buf_len + 1);

	if (buf == NULL)
		return (0);

	t_num = num;

	for (buf_indx = buf_len - 1; t_num != 0; buf_indx--)
	{
		buf[buf_indx] = (t_num % bin) + '0';
		t_num /= bin;
	}
	buf[buf_len] = '\0';
	len += print_str(buf);
	return (len);
}

/**
 * p_hex - Convert and prints integers in hexadecimal format
 *
 * @args_param: Integer in base 10 to convert to hexadecimal
 *
 * Return: Length of characters printed
 */
int p_hex(va_list args_param)
{
	unsigned int num;
	int len = 0, hex = 16;
	int n = va_arg(args_param, int);

	if (n < 0)
	{
		num = n * -1;
		num = ~num + 1;
	}
	else
		num = n;

	len += print_hex(num, hex, 1);

	return (len);
}

/**
 * p_Hex - Convert and prints integers in hexadecimal format
 *
 * @args_param: Integer in base 10 to convert to hexadecimal
 *
 * Return: Length of characters printed
 */
int p_Hex(va_list args_param)
{
	unsigned int num;
	int len = 0, hex = 16;
	int n = va_arg(args_param, int);

	if (n < 0)
	{
		num = n * -1;
		num = ~num + 1;
	}
	else
		num = n;

	len += print_hex(num, hex, 0);

	return (len);
}
