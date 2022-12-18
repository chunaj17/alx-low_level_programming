/*
 * file: 102-fibonacci.c
 * auth: samson jisso
 */

#include <stdio.h>

/**
 * main - printts fibonacci series
 *
 * Return: Always 0
 */

int main(void)
{
	int n1 = 1, n2 = 2, i, n3;

	printf("%d, %d, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		n3 = n1 + n2;
		if (i != 50)
		{
			printf("%d, ", n3);
		}
		else
		{
			printf("%d", n3);
		}
		n1 = n2;
		n2 = n3;
	}
	putchar('\n');
	return (0);
}
