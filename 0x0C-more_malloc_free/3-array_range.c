#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - function
 * Description:This function creates an array of
 * integers
 * @min:parameter of function
 * @max:parameter of function
 * Return:pointer(success) or NULL(failure)
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i, pas = (max - min);

	if (min > max)
		return (0);
	else if (min = max)
		pas = 1;
	p = malloc(sizeof(int) * pas);
	if (p == NULL)
		return (0);
	for (i = 0; i < pas; i++)
		p[i] = min + i;
	return (p);
}
