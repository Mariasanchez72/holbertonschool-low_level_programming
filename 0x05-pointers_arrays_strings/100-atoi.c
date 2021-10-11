#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _atoi - Remove letters.
* @s: string
* Return: void
*/

int _atoi(char *s)
{
int x = 48;
int y = 57;
int a = 0;
int plus = 43;
int less = 45;
/* if ascii > 48 && < 57 */
	while (s[a])
	{
		if (s[a] == plus || s[a] == less)
		{
		putchar(s[a]);
		}
		if (s[a] > x && s[a] < y)
		{
		putchar(s[a]);
		}
		else
		{
		return (0);
		}
	a++;
	}
	return (0);
}
