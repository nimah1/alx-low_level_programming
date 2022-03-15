#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always returns 0
 */
int main(void)
{
	int c;

	c = 'z';
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
