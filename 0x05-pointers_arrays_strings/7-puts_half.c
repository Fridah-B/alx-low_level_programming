#include "main.h"
/**
 * puts_half - prints half a string
 * @str: is the string to be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)
		;

	y++;
	for (y /= 2; str[y] != '\0'; y++)
		_putchar (str[y]);
	_putchar ('\n');
}
