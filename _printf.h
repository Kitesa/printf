#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * _printf - my printf function
 *
 * @format: string argument
 *
 * Return: integer
 */
int _printf(const char *format, ...)
{
	const char *format_pointer;
	unsigned int i;
	char *s;
	int char_counter = 0;

	va_list = ap;
	va_start(ap, format);

	for(format_pointer = format; *format_pointer != '\0'; format_pointer++)
	{
		while(*format_pointer != '%')
		{
			putchar(*format_pointer);
			format_pointer++;
			char_counter++;
		}

		format_pointer++;

		switch(*format_pointer)
		{
			case 'd' :
				i = va_arg(ap, int);
				if(i < 0)
				{
					i = -i;
					putchar('-');
				}
				
				puts(convert(i, 10));
				break;
			case 's' :
				s = va_arg(ap, char *);
				puts(s);
				break;
		}
	}

	va_end(ap);
	return (char_counter);
}

char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	}while(num != 0);

	return (ptr);
}
