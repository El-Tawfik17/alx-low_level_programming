#include "main.h"
/**
 * print_alphabet_x10-this function print ten times the alphabet in lowercase
 * Description:This funtion will run print_alphabet ten time
 */
void print_alphabet_x10(void)
{
	char i, c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

	_putchar('\n');

	}
}


