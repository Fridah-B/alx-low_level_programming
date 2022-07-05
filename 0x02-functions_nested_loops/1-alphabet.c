#include "main.h"
#include <ctype.h>
/**
 * print_alphabet - to print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		_putchar (tolower(alphabet));
	_putchar ('\n');
}
