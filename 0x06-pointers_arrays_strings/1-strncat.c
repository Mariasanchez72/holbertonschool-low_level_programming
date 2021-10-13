#include "main.h"

/**
* _strncat - glue two strings.
* @dest: array
* @src: array
* @n: elements of array
* Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	/* go get the null end of string */
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	/* go get until the n elements of src */
	{
		dest[i + j] = src[j];
		/* write content of src on dest after i */
	}
	dest[i + j] = '\0';
	return (dest);
}
