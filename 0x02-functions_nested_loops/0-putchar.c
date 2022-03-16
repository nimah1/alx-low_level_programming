#include "main.h"
/**
 *main - Entry point
 *
 *return: returns 0(success)
 */
int main(void)
{
	char c[] = "_putchar";

	_putchar; c;
	return (0);
}
int _putchar(char c)
{
	return(write(1, &c, 1));
}
