#include "main.h"
/**
 * _islower-checker the lower character
 * Description:This function checker if the character is lower
 * @c:is parameter for our function islower
 * Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
