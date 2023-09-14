#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, stat;
	char *str;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				stat = 0;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil";
				printf("%s", str);
				stat = 0;
				break;
			default:
				stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
