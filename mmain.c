#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned int ui, u;
    void *addr;

    ui = (unsigned int)INT_MAX + 5000;
	u = (unsigned int)INT_MAX;
    addr = (void *)0x7ffe637541f0;
    _printf("Unsigned hexadecimal MAX:[%x, %X]\n", u, u);
    printf("Unsigned hexadecimal MAX:[%x, %X]\n", u, u);
    _printf("Unsigned hexadecimal ABOVE MAX:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal ABOVE MAX:[%x, %X]\n", ui, ui);
    _printf("Unsigned hexadecimal NEGATIVE:[%x, %X]\n", -795, -795);
    printf("Unsigned hexadecimal NEGATIVE:[%x, %X]\n", -795, -795);
    _printf("Unsigned hexadecimal POSITIVE:[%x, %X]\n", 795, 795);
    printf("Unsigned hexadecimal POSITIVE:[%x, %X]\n", 795, 795);

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    return (0);
}
