#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	char* format = NULL;
	/*int len2;*/
	/*int num = -49450707;*/
	/*int num2 = 0;*/
	/*char str[600] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages.";*/


	/* Test cases and edge test cases for %s */
	/*len = _printf("Empty: %s\n", "");
	_printf("%d\n", len);

	len = _printf("Null: %s\n", NULL);
	_printf("%d\n", len);

	len = _printf("Long String: %s\n", str);
	_printf("%d\n", len);

	len = _printf("Special Characters: %s\n", "Hello\tworld\n");
	_printf("%d\n", len);
	
	len = _printf("Multibyte: %s\n", "日本語");
	_printf("%d\n", len);

	len = _printf("Format specifier: %%s\n");
	_printf("%d\n", len);*/


	/* Test Cases for %c */
	len = _printf("%c\n", 'H');
	_printf("%d\n", len);

	len = _printf("Control character: %c\n", '\n');
	_printf("%d\n", len);

	len = _printf("Digit: %c\n", '9');
	_printf("%d\n", len);

	len = _printf("Digit: %c\n", 52);
	_printf("%d\n", len);

	len = _printf("Special Character: %c\n", '#');
	_printf("%d\n", len);

	len = _printf("Escape character: %c\n", '\\');
	_printf("%d\n", len);


	/* Edge Cases for %c*/
	len = _printf(format, 'A');
	_printf("%d\n", len);

	len = _printf("Null Arg: %c\n", '\0');
	_printf("%d\n", len);

	len = printf("Non-ASCII: %c\n", 128);
	_printf("%d\n", len);

	len = _printf("Format specifier: %%c\n");
	_printf("%d\n", len);



	/*len = _printf("Hello\n");
	len2 = _printf("World\n");
	_printf("Length:[%d, %i]\n\n", len, len2);

	len = _printf("Positive Number: %d\n", 3457784);
	_printf("Lenght: %d\n\n", len);

	len = _printf("Negative Number: %d\n", -494507078);
	_printf("Lenght: %d\n\n", len);

	len = _printf("Zero: %d\n", 0);
	_printf("Lenght: %d\n\n", len);

	len = _printf("Large Int = %d\n", 987654321);
	_printf("Lenght: %d\n\n", len);

	len = _printf("Decimal Value = %d\n", 3.14);
	_printf("Lenght: %d\n\n", len);

	len = _printf("Hex Value = %d\n", 0xFF);
	_printf("Lenght: %d\n\n", len);*/

	return (0);
}
