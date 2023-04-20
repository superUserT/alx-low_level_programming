#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int m = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[m])
		{
		printf("%s%c", sep, va_arg(list, int));
			}
			else if (format[i] == 'i') {
            printf("%s%d", sep, va_arg(list, int));
        }
        else if (format[i] == 'f') {
            printf("%s%f", sep, va_arg(list, double));
        }
        else if (format[i] == 's') {
            str = va_arg(list, char *);
            if (!str) {
                str = "(nil)";
            }
            printf("%s%s", sep, str);
        }
        else {
            i++;
            continue;
        }
        sep = ", ";
        i++;
    }
    va_end(list);
