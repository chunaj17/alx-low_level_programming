/*
 *File: 0-positive_or_negative.c
 *Auth: Samson Jisso
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints "is positive" or "is negative" or "is zero" based
 *		on the value of random integer variable "n"
 *
 * Return: Always 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n > 0)
				{
					printf("%d is positive\n", n);
				} else if (n < 0)
				{
					printf("%d is negative\n", n);
				} else if (n == 0)
				{
					printf("%d is zero\n", n);
				}
				return (0);
}
