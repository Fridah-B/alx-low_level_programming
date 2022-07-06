#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase x10
 *
 * Return: 0 Always (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int alphabet;

	i = 0;
	while (i < 10)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar (alphabet);
	}
	i++;
	_putchar('\n');
	}
}
