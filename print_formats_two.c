#include "main.h"

/**
 * p_binaryint - Convert and Prints the unsigned integer to the stdout
 * @args_param: Integer in base 10 to convert to binary
 *
 * Return: Length of characters printed
 */
int p_binaryint(va_list args_param)
{
	int n;
	unsigned int num, t_num, buf_indx, buf_len, len = 0, bin = 2;
	char *buf;

	n = va_arg(args_param, int);

	if (n < 0)
	{
		num = n * -1;
		num = ~num + 1;
	}
	else
	{
		num = n;
	}
	num = n;
	if (num < bin)
	{
		len += print_char(num + 48);
		return (len);
	}
	t_num = num;

	for(buf_len = 0; t_num != 0; buf_len++)
		t_num /= bin;
	
	buf = malloc(sizeof(char) * buf_len + 1);
	if (buf == NULL)
		return (0);

	t_num = num;
	buf_indx = buf_len - 1;
	for (; t_num!= 0; buf_indx--)
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
	size_t indx, rem, div_num, num_len, size, len = 0, hex = 16;
	int n = va_arg(args_param, int);
	char *buf, ch;

	if (n < 0)
	{
		num = n * -1;
		num = ~num + 1;
	}
	else
		num = n;
	
	if (num < 10)
	{
		len += print_char(num + 48);
		return (len);
	}
	else if (num > 9 && num < 16)
	{
		len += print_char(num + 87);
		return (len);
	}

	div_num = num;

	for (num_len = 0; div_num != 0; num_len++)
		div_num /= hex;

	buf = malloc(sizeof(char) * (num_len + 1));

	size = num_len;
	div_num = num;

	for (indx = 0; div_num != 0; indx++)
	{
		rem = div_num % hex;

		if (rem > 9)
			ch = rem + 87;
		else
			ch = rem + 48;

		buf[--size] = ch;
		div_num /= hex;
	}

	buf[num_len] = '\0';
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
int p_hex2(va_list args_param)
{
	unsigned int num;
	size_t indx, rem, div_num, num_len, size, len = 0, hex = 16;
	int n = va_arg(args_param, int);
	char *buf, ch;

	if (n < 0)
	{
		num = n * -1;
		num = ~num + 1;
	}
	else
		num = n;
	
	if (num < 10)
	{
		len += print_char(num + 48);
		return (len);
	}
	else if (num > 9 && num < 16)
	{
		len += print_char(num + 55);
		return (len);
	}

	div_num = num;

	for (num_len = 0; div_num != 0; num_len++)
		div_num /= hex;

	buf = malloc(sizeof(char) * (num_len + 1));

	size = num_len;
	div_num = num;

	for (indx = 0; div_num != 0; indx++)
	{
		rem = div_num % hex;

		if (rem > 9)
			ch = rem + 55;
		else
			ch = rem + 48;

		buf[--size] = ch;
		div_num /= hex;
	}

	buf[num_len] = '\0';
	len += print_str(buf);

	return (len);
}
