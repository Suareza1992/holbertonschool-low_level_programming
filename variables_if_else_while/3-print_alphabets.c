#include <stdio.h>

/**
 * main - Entry point
 *
 * Return (0) (Success)
 */
int main(void)
{

#This will print all the alphabet in lower and uppercase.

	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
