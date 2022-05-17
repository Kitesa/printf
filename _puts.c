#include "main.h"

/**
 * _puts - prints a string
 * @string: input string
 * Return: count of string.
 */
int _puts(const char *string)
{
	int contador = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		contador++;
	}
	return (contador);
}
