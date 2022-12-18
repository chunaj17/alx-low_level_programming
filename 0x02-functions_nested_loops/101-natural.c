/*
 * File: 101-natural.c
 * auth: samson jisso
 */

#include <stdio.h>
/**
 * multiples - prints all multiples of 3 and 5
 *
 *
 */

void multiples(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	putchar('\n');
}

/**
 * main - pirnts the sum of 3 and 5 multiples
 *
 * Return: Always 0;
 */

int main(void)
{
	multiples();
	return (0);
}
