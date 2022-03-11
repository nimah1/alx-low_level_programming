#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char chartype;
	int integ;
	long int longint;
	long long int lonlongint;
	float floo;

	printf("size of char: %d byte(s)\n",sizeof(chartype));
	printf("size of int: %d byte(s)\n",sizeof(integ));
	printf("size of long int: %ld byte(s)\n",sizeof(longint));
	printf("size of long long int: %ld byte(s)\n",sizeof(lonlongint));
	printf("size of float: %d byte(s)\n",sizeof(floo));
	return (0);
}
