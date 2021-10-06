#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[] = "_putchar\n";
	int m;

	m = 0;

	while (m <= 9)
	{
		_putchar(h[m]);
		m++;
	}
	_putchar('\n');
	return (0);
}
