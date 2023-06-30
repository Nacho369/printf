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
    void *addr;

    addr = (void *)0x7ffe637541f0;
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
	
	printf("\n----------------------------------\n");
	_printf("%p", (void *)0x7fff5100b608);
	printf("%p", (void *)0x7fff5100b608);
	

	printf("\n----------------------------------\n");
    _printf("%p", NULL);
    printf("%p", NULL);
	

	printf("\n----------------------------------\n");
	_printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	

	printf("\n----------------------------------\n");
	_printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	

	printf("\n----------------------------------\n");
	_printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
	printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
	

	printf("\n----------------------------------\n");
	_printf("%pppp", (void *)0x7fff5100b6f8);
	printf("%pppp", (void *)0x7fff5100b6f8);

	printf("\n----------------------------------\n");
	_printf("Can you print an address?\n%p\nNice!\n", (void *)-15005754707754);
	printf("Can you print an address?\n%p\nNice!\n", (void *)-15005754707754);



	return (0);
}
