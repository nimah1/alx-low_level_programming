#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
		if ( c != 'q'|| c != 'e')
		putchar(c);
	putchar('\n');
	return (0);
}
