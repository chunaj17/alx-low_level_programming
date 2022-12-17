/*
 * File: 5-sign.c
 * Author: Samson Jisso
 *
 */

#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1, 0 and -1 based on the value of the parameter n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
