#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct structprint - structure 
 * @q: location and method to change data to char
 * @u: print function for specific type
 *
 * Return:integer
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

int _printf(char *format, ...);
int _putchar(char ch);
int _puts(char *string);
int printc(char *format, va_list);
int printstr(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printint(char *format, va_list ap);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printpercent(char *format, va_list ap);
int printhex(char *format, va_list);
int printHEX(char *format, va_list);
int printocta(char *format, va_list);
int print_unsign(char *format, va_list);
#endif

