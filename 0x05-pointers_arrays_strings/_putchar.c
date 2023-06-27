#include "main.h"
#include <unistd.h>

/**
 * _puthcar - writes character c to stdout
 * &c - the character to print
 * Return: 1 on success
 * On error: return 0 - errno will output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
