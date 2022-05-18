#include "main.h"

/**
 * driver - selector for type of fun.
 * @format: string.
 * Description: the function loops through the structs.
 * Return: a pointer
 * structype selector - Struct
 */

int (*driver(const char *format))(const char *format, va_list)
{
int i;

structype selector[] = {
{"%c", printc},
{"%s", printstr},
{"%d", printint},
{"%i", printint},
{"%%", printpercent},
{"%x", printhex},
{"%X", printHEX},
{"%o", printocta},
{"%b", print_b}'
{NULL, NULL}
};

if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (i = 0; selector[i].q; i++)
{
if (format[1] == selector[i].q[1])
return (selector[i].u);
}
return (NULL);
}
