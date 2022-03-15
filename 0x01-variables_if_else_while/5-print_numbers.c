#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always return 0(success)
 */
int main(void)
{
	int c;

	c = 0;
	for (c = 0; c < 10; c++)
		printf("%d", c);
	printf("\n");
	return (0);
}
