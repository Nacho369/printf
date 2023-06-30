#include "main.h"


/**
 * _strcmp - Compare two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
