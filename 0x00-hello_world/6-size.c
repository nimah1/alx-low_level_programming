#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int inte;
	long int longt;
	long long int llongt;
	float floo;


	printf("Size of char: %d byte(s)\n", sizeof(c));
	printf("Size of int: %d byte(s)\n", sizeof(inte));
	printf("Size of long int: %d byte(s)\n", sizeof(longt));
	printf("Size of long long int: %d byte(s)\n", sizeof(llongt));
	printf("Size of float: %d byte(s)\n", sizeof(floo));
	return (0);
}
