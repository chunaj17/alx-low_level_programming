/*
 * File: 7-print_tebahpla.c
 * Author: samson jisso
 *
 */

#include <stdio.h>

/**
 * main -> prints the lowercase alphabet in reverse.
 *
 * Return: Always 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}

