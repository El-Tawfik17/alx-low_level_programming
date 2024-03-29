#include "main.h"
/**
 * _strchr - function
 * Description:This function locates a character in a string.
 * @s:parameter of function
 * @c:parameter of function
 * Return:pointer or NULL
 */
char *_strchr(char *s, char c)
{
	/*declaring variable*/
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (s + i);
	return (0);
}

