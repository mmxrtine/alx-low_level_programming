#include "main.h"
/**
 * _strlen - function to show length of string
 * @s: function parameter
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
