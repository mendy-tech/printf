#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
*_printf - prints to the output
*@format: pointer
*Return: input len
*/

int _printf(const char *format, ...)

{
va_list arg;
int One;
va_start(arg, format);
One = vfprintf(stdout, format, arg);
va_end(arg);
return (One);

}
