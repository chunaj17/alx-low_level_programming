/*
 * File: 3-islower.c
 * Author: Samson Jisso
 *
 */

/**
 * _islower - returns 1 when the char is inlower case
 * @c: is the ascii value of character to be checked
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
