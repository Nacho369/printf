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
	int indx = 0, indx2, len = 0;
	int f_len = 2; /* Change */
	va_list args_param;

	f_type types[] = { /* Add to */
		{'c', p_char},
		{'s', p_str}
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	va_start(args_param, format);

	while (format != NULL && format[indx] != '\0')
	{
		if (format[indx] != '%')
			len += print_char(format[indx]);
		else
		{
			indx++;
			if (format[indx] == '%')
				len += print_char('%');

			for (indx2 = 0; indx2 < f_len; indx2++)
			{
				if (format[indx] == types[indx2].fmt_spec)
				{
					len += types[indx2].func_spec(args_param);
					break;
				}
			}
		}

		indx++;
	}

	va_end(args_param);
	return (len);
}
