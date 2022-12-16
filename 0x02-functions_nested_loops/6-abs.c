/*
 * File: 6-abs.c
 * Author: Samson Jisso
 *
 */

/**
 * _abs - computes the absolute value of an integer.
 *
 * @i: the integer parameter to be computed
 *
 * Return: integer value;
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-(i));
	}
	return (i);
}
