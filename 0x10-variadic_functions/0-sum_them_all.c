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
	unsigned int x, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);
	if (n != 0)
	{
	for (x = 0; x < n; sum += va_arg(ap, unsigned int), x++)
		;
	}
	va_end(ap);
	return (sum);
}
