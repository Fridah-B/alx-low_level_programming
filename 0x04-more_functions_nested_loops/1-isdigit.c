#include "main.h"
/**
 * _isdigit - checks if a value is a digit
 * @c: value entered
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
