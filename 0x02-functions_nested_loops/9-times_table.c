#include "main.h"
/**
 * times_table - prints the table of an interger starting with zero
 * Return:0
 */
void times_tables(void)
{
	int x,y,pr;

	for (x = 0; x <= 9; x++)
	{
		for (y=0; y <= 9; y++)
		{
		pr = x * y;
		
		if (y != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (y == 0)
		{
			_putchar('0');
		}
		else if (pr >= 10)
		{
			_putchar((pr / 10) + '0');
			_putchar((pr % 10) + '0');
		}
		else if ((pr < 10) && (y != 0))
		{
			_putchar(' ');
			_putchar((pr % 10) + '0');
		}
		}
		_putchar('\n');
	}
}


