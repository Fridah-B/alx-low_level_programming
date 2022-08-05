#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all numbers
 * @n: intergers
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	unsigned int sum = 0;

	va_start(ap, n);
	if (n != 0)
	{
	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
