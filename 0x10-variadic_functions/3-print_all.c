#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
int i;
int flag;
char *s;
va_list args;
va_start(args, format);
i = 0;
while (format != NULL && format[i] != 0)
{
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(args, int));
			flag = 0;
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			flag = 0;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			flag = 0;
			break;
		case 's':
			s = va_arg(args, char*);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			flag = 0;
			break;
		default:
			flag = 1;
			break;
	}
	if (format[i + 1] != '\0' && flag == 0)
		printf(", ");
	i++;
}
printf("\n");
va_end(args);
}
