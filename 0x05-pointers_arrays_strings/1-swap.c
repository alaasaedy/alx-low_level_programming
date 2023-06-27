#include "main.h"

/**
 * swap_int: a function that swap the values of two variables
 * @a: a variable to be swaped
 * @b: a variable to be swaped
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
