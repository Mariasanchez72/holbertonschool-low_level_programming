#include "main.h"

/**
* main - Random keygenerator.
* Return: void
*/

int main(void)
{
/* set ascii min limit */
int x = 32;
/* set ascii max limit */
int y = 127;
/* set lenght */
int k;
int z = 9;
int a = 0;
char p[10];
/* seed random with time */
srand(time(0));

	while (a < z)
	{
	/* count to z limit */
		k = rand() % 100;
			/* check if is in valid ascii range */
			if(k > x && k < y)
			{
			p[a] = k;
			a++;
			}
	}
	p[a] = '\0';
	printf("%s", p);
	return (0);
 }
