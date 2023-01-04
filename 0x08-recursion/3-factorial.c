/*
 * File: 3-factorial.c
 * By: samson jisso
 */

#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: integer value
 *
 * Return: factorial of the given number
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);

}
