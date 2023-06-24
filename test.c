#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	/*int len2;*/

	/*len2 = printf("Let's try to printf a simple sentence.\n");*/
	/*_printf("Length:[%d, %i]\n", len, len);*/
	/*printf("Length:[%d, %i]\n", len2, len2);*/

	len = _printf("Character:[%c]\n", 'H');
	printf("%d\n", len);

	len = _printf("H\n");
	printf("%d\n", len);

	len = _printf("String:[%s]", "I am a string !");
	printf("\n%d\n", len);

	return (0);
}
