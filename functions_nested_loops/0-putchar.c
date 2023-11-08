#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - prints the character c to stdout
 * @c: The character to be printed
 *
 * Return: On Success 0.
 * On error, 1 is returned , and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
