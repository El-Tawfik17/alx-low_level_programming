#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function
 * Description:This function allocates memmory for
 * array
 * @nmemb:parameter of function
 * @size:parameter of function
 * Return:pointer(success) or Null(failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
