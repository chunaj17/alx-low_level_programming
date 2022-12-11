#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 1-last_digit.c
 * edited by: Samson Jisso
 */


/**
 * main -> assignes random number and
 * after computing the last digit
 * prints last digit is greater than 5, zero, or
 * les than 6 and not 0
 *
 * Return: Always 0
 */
int main(void)
{
		int n, lDig;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
			lDig = n % 10;
		if (lDig > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, lDig);
		}
		else if (lDig == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, lDig);
		}
		else if (lDig < 6 && lDig != 0)
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDig);
		}
		return (0);
}
