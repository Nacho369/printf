#ifndef MAIN_H
#define MAIN_H


#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>


/**
 * struct format_types - A new struct type defining a printer.
 *
 * @fmt_spec: A symbol representing a data type.
 * @func_spec: A function pointer to a function that
 * prints a data type corresponding to symbol (ft).
 */
typedef struct format_types
{
	char fmt_spec;
	int (*func_spec)(va_list args_param);
} f_type;


/* Functions Prototype */
int _printf(const char *format, ...);

int check_format(const char *format, va_list args_param,
		int indx, f_type *types);

int print_char(char c);

int print_str(char *str);


/* Format Specifier Function Prototypes */
int p_char(va_list args_param);

int p_str(va_list args_param);

#endif /* MAIN_H */
