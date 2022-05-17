#include "main.h"

/**
 * printpercent - prints %
 * @format: strings
 * @ap: va_list
 * Return: number of characters printed
 */

int printpercent(char *format, va_list ap)
{
	(void)format;
	(void)ap;
	_putchar('%');
	return (1);
}
