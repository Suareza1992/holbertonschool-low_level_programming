#include "main.h"

/**
* _puts - Prints the desired string.
*@str: The string to be printed.
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
