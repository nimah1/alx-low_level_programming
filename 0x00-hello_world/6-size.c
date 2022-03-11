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


	printf("size of char: %d byte(s)\n",sizeof(c));
	printf("size of int: %d byte(s)\n",sizeof(inte));
	printf("size of long int: %ld byte(s)\n",sizeof(longt));
	printf("size of long long int: %ld byte(s)\n",sizeof(llongt));
	printf("size of float: %d byte(s)\n",sizeof(floo));
	return (0);
}
