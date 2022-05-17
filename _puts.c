#include "main.h"

/**
 * _puts - prints a string
 * @string: input string
 * Return: count number of strings
 */

int _pts(const char *string)
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
