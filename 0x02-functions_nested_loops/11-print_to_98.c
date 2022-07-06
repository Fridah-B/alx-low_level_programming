#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers
 * @n: is a natural mumber
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	for (n = n; n < 98; n++)
	printf("%d, ", n);
	printf("%d\n", 98);
	}
	else
	{
	for (n = n; n > 98; n--)
	printf("%d, ", n);
	printf("%d\n", 98);
	}
}
