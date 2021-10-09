#include "holberton.h"

/**
 * print_number - print an integer using "_putchar".
 *
 * @n: the integer to print.
 *
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
	_putchar('-');
	x = -x;
	}
	if ((x / 10) > 0)
	{
		/*doit again*/
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
