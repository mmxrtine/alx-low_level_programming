#include "main.h"

/**
 * char *_strcat - main function
 * @dest: first parameter
 * @src: second parameter
 * Return: new dest string
 */

char *_strcat(char *dest, char *src)
{
	int dest_length;
	int i = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}

	dest[dest_length + i] = '\0';

	return (dest);
}
