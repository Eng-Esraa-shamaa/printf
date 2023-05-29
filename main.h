#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
/**
* struct specify - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct specify
{
char *sym;
int (*f)(va_list);
};
typedef struct specify specs;
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list list);
int print_string(va_list list);
int _print_int(va_list list);
int count_digits(int num);
int print_unsigned(va_list list);
int print_binary(va_list list);
int print_helper(const char *format, specs funcs[], va_list list);
#endif
