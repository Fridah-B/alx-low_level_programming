#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Work done)
 */
int main(void)
{
	int y;

	for (y = 'A'; y <= 'Z'; y++)
		putchar (tolower(y));
	for (y = 'A'; y <= 'Z'; y++)
		putchar (y);
	putchar ('\n');
	return (0);
}
