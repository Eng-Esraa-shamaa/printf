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
int count = 0, i;
int *octal;
unsigned int num;
unsigned int n;

	num = va_arg(list, unsigned int);
octal = malloc(sizeof(int) * count);
if (octal == NULL)
return (-1);
n = num;
while (n / 8 != 0)
{
n /= 8;
count++;
}
count++;
i = 0;
while (i < count)
{
octal[i] = num % 8;
num /= 8;
i++;
}
for (i = count - 1; i >= 0; i--)
{
_putchar(octal[i] + '0');
}
	free(octal);
	return (count);
}
