#include "main.h"
/*
 * _puts_recursion - main function
 * @s: first paramter
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
