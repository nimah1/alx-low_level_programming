#include "main.h"
/**
 *print_sign - prints the sign of number
 *
 *Return: 1 if n>0, 0 if n=0, -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
		print_sign('+');
	else if (n == 0)
		print_sign(0);
	else
		print_sign('-');
	return (0);
}
