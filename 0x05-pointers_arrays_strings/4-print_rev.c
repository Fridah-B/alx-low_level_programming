#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: is the string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (n = n - 1; n >= 0; n--)
	{
		_putchar (s[n]);
	}
	_putchar ('\n');
}
