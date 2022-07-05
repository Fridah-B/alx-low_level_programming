#include "main.h"
#include <ctype.h>
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
		for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
			_putchar (tolower(alphabet));
	i++;
	_putchar ('\n');
}
