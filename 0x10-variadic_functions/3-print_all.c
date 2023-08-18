#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all variadic arguements
 * @format: data type to be entered
 * Return: absolutely nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	char *s;
	int int_value;
	float float_value;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				int_value = va_arg(args, int);
				printf("%d", int_value);
				break;
			case 'f':
				float_value = (float)va_arg(args, double);
				printf("%f", float_value);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
