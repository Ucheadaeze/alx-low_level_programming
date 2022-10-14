#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all variables
 * @format: contains types of params in order
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list params;
	char *s, *sep = "";

	if (format)
	{
		va_start(params, format);
		while (format[i])
		{
			switch (format[i]);
			{
			case 'c':
				printf("%c", va_arg(params, int));
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				break;
			case 's':
				s = va_arg(params, char *);
				if (!s)
				      s = "(nil)";
				printf("%s", sep, s);
				break;
			default:
				i++;
				continue;
			}
			sep = ",";
			i++;
		}
		va_end(params);
	}
	printf("\n");
}
