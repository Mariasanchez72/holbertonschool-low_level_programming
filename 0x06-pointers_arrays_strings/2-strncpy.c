#include "main.h"

/**
* _strncpy - copy a string.
* @dest: array
* @src: array
* @n: elements of array
* Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	/* go till the end and erase */
	{
	*(dest + i) = '\0';
	i++;
	}
	return (dest);
}
