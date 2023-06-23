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
	int indx, indx2, len = 0;
	va_list args_param;

	f_type types[] = {
		{'c', p_char},
		/*{'s', p_str},*/
		{'%', p_percent}
	}

	va_start(args_param, format);

	while (format != NULL && format[indx] != '\0')
	{
		for (indx2 = 0; types[indx2] < 2; indx2++)
		{
			if (format[indx] == '%' &&
			format[indx + 1] == types[indx2].fmt_spec)
				types[indx2].funct_spec(va_list args_param);
			else
			{
				print_char(format[indx]);
				break;
			}
		}

		indx++;
	}
}


/**
 * p_char - Prints a character to the stdout
 *
 * @args_param: Character to print
 *
 * Return: void
 */
void p_char(va_list args_param)
{
	int ch;

	ch = va_arg(args_param, int);

	print_char(ch);
}


/**
 * p_percent - Prints the percent symbol to the stdout
 *
 * @args_param: Symbol to print
 *
 * Return: void
 */
void p_percent(va_list args_param)
{
	int ch;

	ch = va_arg(args_param, int);

	print_char(ch);
}
