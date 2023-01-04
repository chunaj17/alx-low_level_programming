/*
 * File: 4-pow_recursion.c
 * By: samson jisso
 */

#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised
 * to the power of y
 * @x: integer value x
 * @y: integer value y
 *
 * Return: the power raised value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
