#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Work done)
 */
int main(void)
{
	long y, z;

	y = 612852475143;
	for (z = 2; z < y; z++)
	{
		while (y % z == 0)
			y = y / z;
	}
	printf("%lu\n", y);
	return (0);
}

