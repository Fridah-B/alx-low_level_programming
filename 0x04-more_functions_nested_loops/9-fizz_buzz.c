#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if (y % 15 == 0)
			printf("FizzBuzz");
		else if (y % 5 == 0)
			printf("Buzz");
		else if (y % 3 == 0)
			printf("Fizz");
		else
			printf("%d", y);
		if (y != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
