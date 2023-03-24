#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the number of arguments
 * Return: the integer sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	int i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
