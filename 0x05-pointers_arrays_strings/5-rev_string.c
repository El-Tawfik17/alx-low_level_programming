#include "main.h"
/**
 * rev_string - function reverse a string
 * @s:isparamater
 * Return:0
 */
void rev_string(char *s)
{
	int i = 0, x, y, c;

	while (s[i] != '\0')
	{
		i++;
	}
	x = 0;
	y = i - 1;
	while (y >= 0)
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		x++;
		y--;
	}
}
