#include "main.h"

/**
 * char *_strcat - main function
 * @dest: first parameter
 * @src: second parameter
 * Return: new dest string
 */

char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int i; /* for looping */


/* get length using i */
	for (i = 0; dest[i] != '\0'; i++)
	{
		destlength++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{	
		srclength++; 
	}

/* to apppend src to dest */
	for (i = 0; i <= srclength; i++)
	{
		dest[destlength + i] = src[i];
	}

	return (dest);
}
