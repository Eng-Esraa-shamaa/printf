#ifndef PRINTF_FILE
#define PRINTF_FILE

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int _print_int(va_list list);
int count_digits(int num);
int print_unsigned(va_list list);
int print_binary(va_list list);

#endif
