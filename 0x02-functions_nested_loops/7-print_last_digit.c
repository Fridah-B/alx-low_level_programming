#include "main.h"
/**
 * print_last_digit - prints the last number of a value
 * @d: number entered
 * Return: Always 0 (Success)
 */
int print_last_digit(int d)
{
	int last_digit;

	if (d <= 0)
	{
	last_digit = (-1 * (d % 10));
	_putchar (last_digit + '0');
	return (last_digit);
	}
	else
	{
	last_digit = (d % 10);
	_putchar (last_digit + '0');
	return (last_digit);
	}
}
