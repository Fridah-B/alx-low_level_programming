#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @seperator: prints a seperator
 * @n: intergers
 * Return: 0
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		printf("%i", va_arg(ap, int));
		if (x != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
