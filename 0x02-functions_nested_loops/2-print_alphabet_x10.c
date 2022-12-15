/*
 * File: 2-print_alphabet_x10.c
 * Author: Samson Jisso
 *
 */
#include "main.h"
/**
 * print_alphabet_x10 -> prints 10 times the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		i++;
	}

		_putchar('\n');
}
