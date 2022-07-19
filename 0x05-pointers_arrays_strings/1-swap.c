#include "main.h"
/**
 * swap_int - swaps two intergers
 * @a: int one
 * @b: int two
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
