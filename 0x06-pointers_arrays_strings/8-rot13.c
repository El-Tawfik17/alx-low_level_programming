#include "main.h"
/**
 * rot13 - Entry point
 * @n: paramater
 * Return:0
 */
char *rot13(char *n)
{
	int x, rot_c = 13, i = 0;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'O', 'b', 'o', 'C', 'P', 'c', 'P', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v', 'J', 'W', 'j', 'w', 'K', 'X', 'k', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M', 'Z', 'm', 'Z'};

	while (n[i] !='\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (n[i] == toswap[x])
			{
				n[i] = n[i] + rot_c;
				x = 51;
			}
		rot_c = rot_c * -1;
		}
	i++;
	}
	return (n);
}
