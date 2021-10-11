#include "main.h"

/**
 *_strlen - Returns lenght of a string
 *@s: char
 *Return: lenght of string in s
 */

int _strlen(char *s)
{
int x;
x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
