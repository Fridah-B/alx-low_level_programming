#include "main.h"
/**
 * _scan_num - checks whether an int is a prime num
 * @x: number to be checked
 * @i: number to be repeated
 * Return: prints 0 or 1
 */
int _scan_num(int x, int i)
{
	if (i == x - 1)
		return (1);
	else if (x % i == 0)
		return (0);
	if (x % i != 0)
		return (_scan_num(x, i + 1));
	return (0);
}
/**
 * is_prime_number - checks if a value is a prime number
 * @n: is the value in question
 * Return: Always 0 or 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_scan_num(n, i));
}
