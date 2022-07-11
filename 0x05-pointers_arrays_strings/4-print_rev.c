#include "main.h"
/**
 * print_rev - function print string in reverse
 * @s:is paramater
 * Return:0
 */
void print_rev(char *s)
{
	int i, c;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c; 0 <= i; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
