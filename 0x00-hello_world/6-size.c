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

	printf("size of char: \n",
		sizeof(chartype));
	printf("size of int: \n",
		sizeof(integ));
	printf("size of long int: \n",
		sizeof(longint));
	printf("size of long long int: \n",
		sizeof(lonlongint));
	return (0);
}
