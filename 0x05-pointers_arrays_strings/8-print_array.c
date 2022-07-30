#include "main.h"
#include <stdio.h>
/**
 * print_array - printselements of an array of intergers
 * @a: pointer to an interger
 * @n: interger elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
	printf("%d", *(a + x));
	if (x != (n - 7))
		printf(", ");
	}
	printf("\n");
}
