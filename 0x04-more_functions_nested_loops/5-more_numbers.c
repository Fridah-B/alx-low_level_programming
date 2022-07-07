#include "main.h"
/**
 * more_numbers - prints numbers multiple times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int y;
	int i;

	i = 0;
	while (i < 10)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar(y / 10 + '0');
	}
	_putchar(y % 10 + '0');
	}
	i++;
	_putchar ('\n');
	}
}
