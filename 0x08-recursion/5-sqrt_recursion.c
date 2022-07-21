#include "main.h"
/**
 * _scan - scans for the square root
 * @y: interger
 * @x: interger
 * Return: Always 0
 */
int _scan(int x, int y)
{
	if (y == 0 || y == 1)
		return (y);
	else if (x * x < y)
		return (_scan(x + 1, y));
	else if (x * x == y)
		return (x);
	return (-1);

	return (-1);
}
/**
 * _sqrt_recursion - calculates the square root of natural numbers
 * @n: is a value of the type int
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int m = 0;

	if (m < 0)
		return (-1);
	else
		return (_scan(m, n));
}
