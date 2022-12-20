/*
 * File: 1-swap.c
 * Auth: samson jisso
 *
 */

#include "main.h"
#include <stdio.h>

/**
 * swap_int - swapts the valuesof two integers
 * @a: first integer value pointer
 * @b: second integer value pointer
 *
 */
void swap_int(int *a, int *b)
{
	int aa = *a;
	*a = *b;
	*b = aa;
}
