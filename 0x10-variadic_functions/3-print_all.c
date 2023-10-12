#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all -A Function that can print anything.
  *@format: Arguments passed to function.
  *
  *Return: Nothing
  */
void print_all(const char * const format, ...)
{
	unsigned int j;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	j = 0;
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++;
	}

	printf("\n");
	va_end(args);
}
