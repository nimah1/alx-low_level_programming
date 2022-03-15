#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always returns 0
 */
int main(void)
{
	int c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
		
	return (0);
}
