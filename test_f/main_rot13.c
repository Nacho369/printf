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
	int len, len2;

	_printf("\n----------------------------------------------\n");
	len = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	len2 = printf("This sentence is retrieved from va_args!\n");
	_printf("\n----------------------------------------------\n");

	_printf("\n----------------------------------------------\n");
	len = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	len2 = printf("Complete the sentence: You know nothing, Jon Snow.\n");
	_printf("\n----------------------------------------------\n");

	_printf("\n----------------------------------------------\n");
	len = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "");
	len2 = printf("Complete the sentence: You  nothing, Jon Snow.\n");
	_printf("\n----------------------------------------------\n");

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
