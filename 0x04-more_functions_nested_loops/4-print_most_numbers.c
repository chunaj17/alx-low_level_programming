/*
 * File: 4-print_most_numbers.c
 * Auth: Samson Jisso
 */

#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: noting
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
