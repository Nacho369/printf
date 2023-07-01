#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	void *p = (void *)-1;

	void *p1 = (void *)0x7fff5100b6f8;
	void *p2 = (void *)0x7faf51f0f608;
	void *p3 = (void *)0x6ff42510b6f8;
	void *p4 = (void *)0x7fff510236f8;
	
	_printf("Can you print an address?\n%p\nNice!\n", p);
	printf("Can you print an address?\n%p\nNice!\n", p);
	
	printf("\n--------------------------------\n");
	_printf("%p", p);
	printf("%p", p);
	
	printf("\n--------------------------------\n");
	_printf("%p", NULL);
	printf("%p", NULL);

	printf("\n--------------------------------\n");
	_printf("Can you print an address?\n%p\nNice!\n", p);
	printf("Can you print an address?\n%p\nNice!\n", p);
	
	printf("\n--------------------------------\n");

	_printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", p1, p2, p3, p4);
	printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", p1, p2, p3, p4);

	printf("\n--------------------------------\n");
	_printf("");
	printf(""); 

	printf("\n--------------------------------\n");
	_printf("%pppp", p);
	printf("%pppp", p);

	printf("\n--------------------------------\n");
	_printf("%p\n", -69344402444398);
	printf("%p\n", -69344402444398);
	
	printf("\n--------------------------------\n");
	_printf("%p\n", &p1);
	printf("%p\n", &p1);
	return (0);
}
