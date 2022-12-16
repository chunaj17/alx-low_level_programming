/*
 * File: 4-isalpha.c
 * Author: Samson Jisso
 *
 */

/**
 * _isalpha - checks for alphabetic character
 * @c: character value to be checked
 *
 * Return: 1 if condition true or 0 if condition false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
