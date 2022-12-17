/*
 * File: 0-isupper.c
 * Author: Samson Jisso
 */

#include "main.h"

/**
 * _isupper -checks for uppercase character
 * @c: character to be checked
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
