#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @seperator: string printed between 2 strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	char *v;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		v = va_arg(ap, char*);
		if (v != NULL)
			printf("%s", v);
		else
			printf("(nil)");
		if (x != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
