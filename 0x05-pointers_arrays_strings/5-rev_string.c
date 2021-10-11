#include "main.h"

/**
* rev_string - Reverse a string.
* @s: a string
* Return: the string reversed
*/

void rev_string(char *s)
{
int x;
int y;
int z = 0;
char lrev[500];
x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (y = (x - 1); y >= 0; y--, z++)
	{
		lrev[z] = s[y];
	}
	for (y = 0; y < x; y++)
	{
		s[y] = lrev[y];
	}
}
