#include "main.h"
#include <stdio.h>
/**
 * _abs -function computes the absolute value
 * @n:is paramater
 * Return:0
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n*-1);
}

