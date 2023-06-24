# This directory contains the files for the 0x11. C - printf project

### Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

### Compilation
Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

### Files Description
```
✓ _printf.c -> Main printf function

✓ main.h -> Header file

✓ write_func.c -> Function to print a character and string (Putchar/Puts function)

✓ print_format -> Contains function for the format specifiers
```

### Tasks
#### Task 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.
- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
...*c
...*s
...*%
- You don’t have to reproduce the buffer handling of the C library printf function
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers
