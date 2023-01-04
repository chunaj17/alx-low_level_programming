/*
 * File: 6-is_prime_number.c
 * By: samson jisso
 */

#include "main.h"

int validatePrime(int f, int s);

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number
 * otherwise return 0
 * @n: integer value
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (validatePrime(2, n));
}

/**
 * validatePrime - validate the intger is prime or not
 * @f: first integer
 * @s: second integer
 *
 * Return: integer
 */

int validatePrime(int f, int s)
{
	if (s < 2 || s % f == 0)
	{
		return (0);
	}
	else if (f > s / 2)
	{
		return (1);
	}
	else
	{
		return (validatePrime(f + 1, s));
	}
}
