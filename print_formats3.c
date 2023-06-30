#include "main.h"


/**
 * p_rev_str - Print char string in reverse
 *
 * @args_param: Arguments list
 * @flag_id: Index of flag
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


/**
 * p_rot13 - Print rot13 string
 *
 * @args_param: Argument string list
 * @flag_id: Index of flag
 *
 * Return: Length of string encoded
 */
int p_rot13(va_list args_param, int flag_id __attribute__((unused)))
{
	int indx1, indx2, len = 0;
	char leet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encd[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ch = va_arg(args_param, char *);

	if (ch == NULL)
		return (0);

	for (indx1 = 0; ch[indx1] != '\0'; indx1++)
	{
		for (indx2 = 0; leet[indx2] != '\0'; indx2++)
		{
			if (ch[indx1] == leet[indx2])
			{
				len += print_char(encd[indx2]);
				break;
			}
		}

		if (ch[indx1] != leet[indx2])
			len += print_char(ch[indx1]);
	}

	return (len);
}
