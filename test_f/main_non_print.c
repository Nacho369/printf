#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Newline: %S\n", "Best\nSchool");
	_printf("Tab: %S\n", "Best\tSchool");
	_printf("Carriage Return: %S\n", "Best\rSchool");
	_printf("Backspace: %S\n", "Best\bSchool");
	_printf("Form Feed: %S\n", "Best\fSchool");
	_printf("Vertical Tab: %S\n", "Best\vSchool");
	_printf("Null  haracter: %S\n", "Best\0School");

	_printf("US: %S\n", "Best\x4School");
	_printf("EOT: %S\n", "Best\x17School");
	_printf("US: %S\n", "Best\x1FSchool");

	return (0);
}
