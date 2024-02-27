#include "main.h"

/**
* _puts - Prints the desired string.
* @str: The string to be printed.
* Return: void
*/

void _puts(char *str)
{
	int c=0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
