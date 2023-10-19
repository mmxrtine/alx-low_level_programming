#include "main.h"

/**
 * char *_strcat - main function
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: new dest string
 */

char *_strncat(char *dest, char *src, int n)
{
/* variables for length */
	int destlength = 0;
	int srclength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlength++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclength++;
	}
/* append */
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlength + i] = *src;
		src++;
	}
	dest[destlength + i] = '\0';
	return (dest);
}
