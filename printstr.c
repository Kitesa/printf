#include "main.h"

/**
 * printstr - print string
 * @ap: va_list
 * @format: format string
 * Return: number of string to be printed
 */

int printstr(char *format, va_list ap)
{
	char *string = va_arg(ap, char *);
	int contador;
	(void)format;

	if (string == NULL)
		string = "(null)";
	contador = _puts(string);
	return (contador);
}
