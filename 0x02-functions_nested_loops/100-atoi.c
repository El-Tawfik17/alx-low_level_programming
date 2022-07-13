#include "main.h"
/**
 * _atoi - function
 * @s: is paramater
 * Return:0
 */
int _atoi(char *s)
{
	int i = 0, sr = 1;

	unsigned int r = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i[s] == '-')
		{
			sr *= -1;
		}
	if (i[s] >= '0' && i[s] <= '9')
	{
		r = r + s[i] - '0';
		if ((*(s + (i + 1)) >= '0') && (*(s +(i +1) <= '9'))
				r *= 10;
		else
				break;
	}
	}
	return (r *sr);
}
