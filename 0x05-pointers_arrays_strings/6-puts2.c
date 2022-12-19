/*
 * File: 6-puts2
 * Auth: samson jisso
 *
 */
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with first character followed by a
 * new line.
 * @*str: string value 
 */

void puts2(char *str)
{
	int i;
	
	for (i = 0; i != '\0'; i++)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}
