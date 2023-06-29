#include "main.h"


int main(void)
{
	void *addr, *addrs;
	int num;
	int *n = &num;

	addr = (void *)0x7ffe637541f0;
	addrs = (void *)-0x7ffe637541f0;

	printf("Address: [%p]\n", addr);
	printf("Address with num: [%p]\n", &num);
	printf("Address of num with pointer: [%p]\n", n);
	printf("Address: [%p]\n", addrs);

	printf("\n");

	/*
	_printf("Address: [%p]\n", addr);
        _printf("Address with num: [%p]\n", &num);
        _printf("Address of num with pointer: [%p]\n", n);
	*/

	return (0);
}
