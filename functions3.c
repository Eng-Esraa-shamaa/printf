#include"main.h"
/**
 * print_lowhex - prints the lowcase  hexa rep of an unsigned integer
 * @list: the number to be printed in hexadecimal
 * Return: zero
 */
int print_lowhex(va_list list)
{
char hex[16];
int i, rem;
int count = 0;
unsigned int num;

num = va_arg(list, unsigned int);
for (i = 0; num > 0; i++)
{
rem = num % 16;
if (rem < 10)
hex[i] = rem + '0';
else
hex[i] = 'a' + (rem - 10);
num /= 16;
}
if (i == 0)
count += _putchar('0');
for (i = i - 1; i >= 0; i--)
{
count += _putchar(hex[i]);
}
return (count);
}
/**
 * print_uphex - prints the uppercase  hexa rep of an unsigned integer
 * @list: the number to be printed in hexadecimal
 * Return: zero
 */
int print_uphex(va_list list)
{
char hex[16];
int i, rem;
int count = 0;
unsigned int num;

num = va_arg(list, unsigned int);

for (i = 0; num > 0; i++)
{
rem = num % 16;
if (rem < 10)
hex[i] = rem + '0';
else
hex[i] = 'A' + (rem - 10);
num /= 16;
}
if (i == 0)
count += _putchar('0');
for (i = i - 1; i >= 0; i--)
{
count += _putchar(hex[i]);
}
return (count);
}
/**
 *print_octal - prints the octal representation of an unsigned integer
 *@list: the number to be printed in octal
 *Return: nothing
 */
int print_octal(va_list list)
{
int print_octal(va_list list)
{
int octal[32];
int i, j;
int count = 0;
unsigned int num;

num = va_arg(list, unsigned int);
for (i = 0; num > 0; i++)
{
octal[i] = num % 8;
num = num / 8;
}
if (i == 0)
{
count += _putchar('0');
}
j = i - 1;
for (; j >= 0; j--)
{
count += _putchar(octal[j] + '0');
}
return (count);
}
