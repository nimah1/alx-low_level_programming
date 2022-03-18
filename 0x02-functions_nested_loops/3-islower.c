#include "main.h"
/**
 *_islower - checks for lowercase
 *
 *Return: returns 1 if lowercase, returns 0 otherwise
 */
int _islower(int c)
{
	int r;

	r = (c >= 'a') && (c <= 'z');

	return r;
}
