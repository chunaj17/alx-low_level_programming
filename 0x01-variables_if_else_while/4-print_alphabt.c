/*
* File: 4-print_alphabt.c
* Author: Samson Jisso
*
*/
#include <stdio.h>

/**
* main -> prints all alphabets in lowercase
* except letters 'q' and 'e'
*
* Return: Always 0
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	if (i != 'q' && i != 'e')
	{
		putchar(i);
	}
	i++;
	}
	putchar('\n');
return (0);
}
