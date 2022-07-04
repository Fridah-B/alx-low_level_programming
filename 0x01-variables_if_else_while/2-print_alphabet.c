#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (work done)
 */
int main(void)
{
	int y;

	for (y = 'A'; y <= 'Z'; y++)
		putchar (tolower(y));
	putchar ('\n');
	return (0);
}
