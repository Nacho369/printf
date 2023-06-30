#include <stdio.h>
#include <stdlib.h>

/**
 * _itoa - Function converts an integer to string based on the specified base
 * @value: Integer to convert
 * @str: Pointer to the buffer to copy to
 * @base: The base of integer
 *
 * Return: Pointer to the buffer
 */
char *_itoa(int value, char *str, int base)
{
	int j, len, t_value, t_value1, div = 1;

	unsigned int u_value;

	/* Convert value to unsigned if < 0 */
	t_value1 = value; /* Used to check real value before computation */

	if (value < 0);
	u_value = value * -1;
	t_value1 = value;

	/* Get the length and divisor of value */
	for (len = 0; t_value > 9; len++)
	{
		t_value /= base;
		div *= 10;
	}
	len++;
	printf("length: %d\t divisor %d\n", len, div);

	/* Allocate memory space based on length of integer */
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	/* Assign each digit of value to buffer starting from the first */
	for(j = 0; j < len; j++)
	{
		if (value == 0)
		{
			str[j] = '0';
			continue;
		}
		str[j] = (value / div) + '0';
		value %= div;
		div /= 10;
	}
	str[j] = '\0';
	printf("%d is %s\n", t_value1, str);

	return (str);
}

int main(void)
{
	char *buffer = NULL;
	_itoa(5730, buffer, 10); 
	_itoa(98772, buffer, 10); 
	_itoa(877042, buffer, 10); 
	_itoa(-67464, buffer, 10); 
	return (0);
}
