#include "main.h"
/**
 * _strcpy - function copie pointer
 * @dest:is paramater
 * @src:is paramater
 * Return:0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
