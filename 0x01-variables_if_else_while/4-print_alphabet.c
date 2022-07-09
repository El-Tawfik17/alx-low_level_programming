#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char al= 'a';

	while (al <= 'z')
	{
		if (al == 'q')
		{
			al++;
		}
		else if (al == 'e')
		{
			al++;
		}
		else
		{
			putchar(al);
			al++;
		}
	}
	putchar('\n');
	return (0);
}
