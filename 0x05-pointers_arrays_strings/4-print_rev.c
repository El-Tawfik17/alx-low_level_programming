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
	for (; 0 <= c; c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
