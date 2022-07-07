#include "main.h"
/**
 * print_line - prints a line across
 * @n: number of times line is printed
 * Return: Always 0
 */
void print_line(int n)
{
	int y;

	if (n >= 0)
	{
	for (y = 0; y < n; y++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
