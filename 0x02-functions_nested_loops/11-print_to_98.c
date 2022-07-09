#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function print number from ninety eight
 * @n:is parameater of function
 * Return:0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d",n);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				printf("%d",n);
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
		if (n != 98)
		{
			printf("%d",n);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			printf("%d",n);
		}
		n--;
		}
	}
	printf("%d",n);
}
