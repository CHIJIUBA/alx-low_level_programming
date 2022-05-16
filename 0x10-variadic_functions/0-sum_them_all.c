#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums the argument passed to it,
 * takes variable argument.
 * @n: number of unknown arguments passed.
 * @... A variable number of parameter(s).
 * 
 * Return: the sum of all the passed arguments.
 */

int sum_them_all(const unsigned int n, ...)
{    
    va_list ap;
    unsigned int i, sum;

    if (n == 0)
        return (0);
    va_start(ap, n);

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += va_arg(ap, int); 
    }
    va_end(ap);
    return sum;
}
