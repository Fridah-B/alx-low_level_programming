#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar (y);
		if (y == '9')
			break;
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
