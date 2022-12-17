/*
 * File - 3-print_numbers.c
 * Auth - SJ
 *
 */

#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 *
 * Return: noting
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
