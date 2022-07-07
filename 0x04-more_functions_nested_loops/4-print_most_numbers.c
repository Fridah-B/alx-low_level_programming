#include "main.h"
/**
 * print_most_numbers - does not print 2 and 4
 *
 * Return: 0 Always
 */
void print_most_numbers(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
		if (y != '2' && y != '4')
			_putchar (y);
	_putchar ('\n');
}
