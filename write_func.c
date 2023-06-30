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
int print_num(size_t num)
{
	int iter, ld, len, size;
	size_t num_len = num;
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
		ch = ld + 48;
		--size;
		buf[size] = ch;
		num /= 10;
	}

	buf[len] = '\0';
	print_str(buf);
	free(buf);

	return (len);
}


/**
 * print_hex - Prints a the hexadecimal value of an integer
 *
 * @num: Integer to convert to hex
 * @hex: Hex value
 * @hex_case: Hexadecimal case value
 *
 * Return: Lenght printed
 */
int print_hex(unlint_t num, int hex, int hex_case)
{
	int indx, rem, num_len, size, len = 0;
	unlint_t div_num;
	char *buf, ch;

	if (num < 10)
	{
		len += print_char(num + 48);
		return (len);
	}
	else if (num > 9 && num < 16)
	{
		rem = num;
		ch = check_hex(rem, hex_case);
		len += print_char(ch);
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
		ch = check_hex(rem, hex_case);
		buf[--size] = ch;
		div_num /= hex;
	}

	buf[num_len] = '\0';
	len += print_str(buf);
	free(buf);

	return (len);
}


/**
 * check_hex - Check for upper case hex or lower case hex value
 *
 * @rem: Integer to check and convert to char
 * @hex_case: Hexadecimal value
 *
 * Return: Uppercase hex value if @hex_case == 0
 * else Lowercase value if @hex_case == 1
 */
char check_hex(int rem, int hex_case)
{
	char ch;

	if (hex_case == 1)
	{
		if (rem > 9)
			ch = rem + 87;
		else
			ch = rem + 48;
	}
	else
	{
		if (rem > 9)
			ch = rem + 55;
		else
			ch = rem + 48;
	}

	return (ch);
}
