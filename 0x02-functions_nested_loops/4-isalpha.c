#include "main.h"
/**
 * _islpha - function check if is letter and lowercase or uppercase
 * Description:this function is write return one or zero
 * @c:is paramater for our function
 * Return:0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
