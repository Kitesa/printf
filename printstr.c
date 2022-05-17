#include "main.h"

/**
 * printstr- print str.
 * @pa: gtgtg
 * @format: format str.
 * Return: number str for print.
 */
int printstr(const char *format, va_list pa)
{
  const char *string = va_arg(pa, const char *);
  int contador;
  (void)format;

  if (string == NULL)
    string = "(null)";
  contador = _puts(string);
  return (contador);
}
