#include <stdio.h>
/**
 *Main - Entry point
 *
 * Return: Always return 0(success)
 */
int main(void)
{
	int c;
	int b;

	c = 'a';
	b = 'A';
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (b = 'A'; b <= 'Z'; b++)
	       putchar(b);
	putchar('\n');
	return (0);
}
