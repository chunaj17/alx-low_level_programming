/*
 * File: 5-sqrt_recursion.c
 * By: samson jisso
 */

#include "main.h"

/**
 * sqrRootCheck - a function that compute squar root
 * @a: first integer
 * @b: second integer
 *
 * Return: intger square root result
 */

int sqrRootCheck(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (sqrRootCheck(a + 1, b));
}
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: intger value to be square rooted
 *
 * Return: intger value
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrRootCheck(1, n));
}
