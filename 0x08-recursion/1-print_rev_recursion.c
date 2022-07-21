#include "main.h"
/**
 * _print_rev_recursion - uses recursion to print strings in reverse
 * @s: is a pointer
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
