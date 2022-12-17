/*
 * File: 7-print_last_digit.c
 * Author: Samson Jisso
 *
 */
#include "main.h"


/**
 * print_last_digit - prints the last digit of a number
 * @d: integer value to be computed
 *
 * Return: Always the last digit
 *
 */

int print_last_digit(int d)
{
	int l;

	l = d % 10;
	if (d < 0)
	{
		l = -l;
	}
	_putchar('0' + l);
	return (l);
}
