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

	for (y = 'A'; y <= 'Z'; && y != 'Q'; && y != 'E'; y++)
		putchar(tolower(y));
	putchar ('\n');
	return (0);
}
