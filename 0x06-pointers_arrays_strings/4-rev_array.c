#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverse an array.
 *@a: array.
 *@n: array's length.
 */

void print_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n -1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
