#include "main.h"

/**
 * printc - prints a char.
 * @ap: format of character
 * @format: string
 *
 * Return: number char for printf
 */
int printc(char *format, va_list ap)
{
	(void)format;
	_putchar(va_arg(ap, int));
	return (1);
}
