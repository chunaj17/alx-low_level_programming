/*
 * File: 3-islower.c
 * Author: Samson Jisso
 *
 */

/**
 * _islower - returns 1 when the char is inlower cas
 *
 * Return: Always 0
 */

int _islower(int c)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);
}
