/*
 * File: 7-print_last_digit.c
 * Author: Samson Jisso
 *
 */
#include <stdio.h>


/**
 * print_last_digit - prints the last digit of a number
 * @d: integer value to be computed
 *
 * Return: Always the last digit
 *
 */

int print_last_digit(int d)
{
	int last_digit;
	
	last_digit = d % 10;
	printf("%d",last_digit);	

	return (last_digit);
}
