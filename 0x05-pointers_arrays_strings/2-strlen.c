#include "main.h"
/**
 * _strlen - function
 * Description : this function return the string lenght
 * @s: parameter of function
 * Return:integer
 */
int _strlen(char *s)
{
	/*declaring variable*/
	int cmp = 0;
	/*counting*/
	while (*s != '\0')
	{
		cmp++;
		s++;
	}
	return (cmp);
}
