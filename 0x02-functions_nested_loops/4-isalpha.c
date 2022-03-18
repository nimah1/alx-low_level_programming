#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *@c: parameter to be checked
 *
 *Return: returns 1 if positive and 0 if otherwise
 */
int _isalpha(int c)
{
	int r;
	
	r = (( c >= 'A') && (c <= 'Z');) OR ((c >= 'a') && (c <= 'z'););
	return (r);
}
