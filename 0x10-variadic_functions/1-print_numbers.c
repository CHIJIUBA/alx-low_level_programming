#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints the int argument given followed by separator.
 * @separator: separator to separate the int argument. 
 * @n: number of unknown arguments passed.
 * @... A variable number of parameter(s).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    
    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));

        if ((i + 1) != n && separator != NULL)
            printf("%s", separator);
    }
    printf("\n");
    va_end(args);
}
