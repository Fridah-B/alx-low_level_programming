#include "main.h"
/**
 * print_number - prints interger
 * @n: number to be printed
 * Return: 0 Always (Success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}

}
