#include "main.h"
/**
 * _puts_recursion - function similar to puts
 * @s: parameter
 * return: 0 on success
 */



void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
