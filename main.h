#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
  const char *q;
  int (*u)(const char *format, va_list);
} structype;

int _putchar(const char ch);
int _puts(const char *string);
int printc(const char *format, va_list);
int printstr(const char *format, va_list);
int (*driver(const char *format))(const char *format, va_list);
int _printf(const char *format, ...);
int printint(const char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printpercent(const char *format, va_list pa);
int printhex(const char *format, va_list);
int printHEX(const char *format, va_list);
int printocta(const char *format, va_list);
int print_unsign(const char *format, va_list);
#endif
