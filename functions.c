#include "main.h"
#include<stdio.h>
#include<stdarg.h>
#include <stdlib.h>
#include<unistd.h>
/**
 *_putchar - function used to print character
 *@c: the character to be printed
 *Return: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *_puts - function to print string
 *@s: the string to be printed
 *Return: length of string
 */
int _puts(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
