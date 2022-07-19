#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: string
 * Return: Always 0
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n]; n++)
		_putchar (str[n]);
	_putchar ('\n');
}
