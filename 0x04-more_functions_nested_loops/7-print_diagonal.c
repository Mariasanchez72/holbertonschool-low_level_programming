#include "main.h"
/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * Return: Void.
 * @n: Number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int 1;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (1 = 0; 1 < n; 1++)
	{
		for (s = 0; s < 1; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar ('\n');
	}
}
