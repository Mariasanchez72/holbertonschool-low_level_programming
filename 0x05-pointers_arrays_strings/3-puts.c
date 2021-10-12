#include "main.h"
/**
* _puts - Prints a string.
* @str: a string
* Return: the string to stdout
*/
void _puts(char *str)
{
	for (; *str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
