#include <stdio.h>
/**
 *main - Entry point
 *Description:using the main function
 *this program prints the size of various types on
 *the computer it is compiled and run on
 *Return:Always 0 (Success)
 */
int main(void)
{
	/*variable declaring*/
	int i;
	char c;
	long int li;
	long long int lli;
	float f;
	/*string printing*/
	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of a int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
