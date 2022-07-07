#include "main.h"
/**
 * _isupper - checks for lower case
 * @b - value to be compared
 * @c: checks for uppercase
 * Return: Always 0
 */
int _isupper(int c)
{
	int b;

	for (b = 'A'; b <= 'Z'; b++)
	{
	if (c == b)
		return (1);
	else
		return (0);
	}
	return (0);
}
