#include "main.h"
/**
 * _strcpy - function copie pointer
 * @dest:is paramater
 * @src:is paramater
 * Return:0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
