#include "main.h"
/**
 * jack_bauer - function
 * Description: This function prints every minute
 * of the day of jackBauer
 */
void jack_bauer(void)
{
	/*Declaring variables*/
	int i, ii, iii, iiii;
	/*Initialization*/
	i = ii = iii = iiii = 0;
	while (i < 3)
	{
		while (ii < 10)
		{
			if (i == 2 && ii == 4)
				break;
			while (iii < 6)
			{
				while (iiii < 10)
				{
					_putchar(i + '0');
					_putchar(ii + '0');
					_putchar(':');
					_putchar(iii + '0');
					_putchar(iiii + '0');
					_putchar('\n');
					iiii++;
				}
				iii++;
				iiii = 0;
			}
			ii++;
			iii = 0;
		}
		i++;
		ii = 0;
	}
}
