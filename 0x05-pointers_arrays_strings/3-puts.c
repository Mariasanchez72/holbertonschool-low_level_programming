#include "main.h"

/**
* _puts - Prints a string.
* @str: a string
* Return: the string to stdout
*/

void _puts(char *str)
{
int x;
x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
