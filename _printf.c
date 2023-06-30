#include "main.h"


/**
 * _printf - Prints formatted output to the stdout
 *
 * @format: A character string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int indx = 0, len = 0; 
	va_list args_param;
	char flag[] = "+ #";
	int flag_id = -1;

	f_type types[] = { /* Add to */
		{'c', p_char}, {'s', p_str},
		{'d', p_int}, {'i', p_int},
		{'u', p_unsignedint}, {'o', p_octalint},
		{'b', p_binaryint}, {'x', p_hex},
		{'X', p_Hex}, {'S', p_Str},
		{'p', p_address},
		{0, NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	va_start(args_param, format);

	while (format != NULL && format[indx] != '\0')
	{
		/* If the current indx is'nt % just print as it is. */
		if (format[indx] != '%')
			len += print_char(format[indx]);
		else
		{
			indx++;
			if (format[indx] == '%')
			{
				len += print_char('%');
			}
			else
			{
				flag_id = check_flag(format, indx, flag);
				if (flag_id < 0)
				{
					len += check_format(format, args_param, indx, types, flag_id);
				}
				else
				{
					indx++;
					len += check_format(format, args_param, indx, types, flag_id);
				}
			}
		}
		indx++;
	}

	va_end(args_param);
	return (len);
}


/**
 * check_format - Check the format of the current indx and perform the
 * neccessary operation
 *
 * @format: A character string
 * @args_param: Chracater to print
 * @indx: Current index of the format string
 * @types: Array of function pointers
 *
 * Return: Lenght of printed string
 */
int check_format(const char *format, va_list args_param, int indx,
		f_type *types, int flag_id)
{
	int indx2, len = 0, f_len = 11;

	/**
	 * If format[indx] == % check the next index if
	 * it equals to the fmt_spec
	 */
	for (indx2 = 0; indx2 < f_len; indx2++)
	{
		if (format[indx] == types[indx2].fmt_spec)
		{
			len += types[indx2].func_spec(args_param, flag_id);
			break;
		}
	}
	if (indx2 == f_len)
	{
		len += print_char('%');
		if (format[indx - 1] != '%')
			len += print_char(format[indx-1]);
		len += print_char(format[indx]);
	}
	return (len);
}

/**
 * check_flag - Check for flags
 * @format: format string
 * @indx: Index of format immediately after %
 * @flag: Pointer to array of flags
 *
 * Return: Index of character that match format flag
 * -1 if no match
 */
int check_flag(const char *format, int indx, char *flag)
{
	int i;

	for (i = 0; flag[i]; i++)
	{
		if (format[indx] == flag[i])
			return (i);
	}
	return (-1);
}









