/*
 * File: 1-isdigit.c
 * Author: Samson Jisso
 *
 */

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: integer to be checked
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
