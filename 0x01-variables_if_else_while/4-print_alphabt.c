#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Work done)
 */
int main(void)
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y == 'q')
			continue;
		else if (y == 'e')
			continue;
		putchar (y);
	}
	putchar ('\n');
	return (0);
}
