/*
 * File: 9-strcpy.c
 * Auth: samson jisso
 *
 */
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * followed by a new line.
 * @*dest; memory address,
 * @*src; memory address
 *
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	
	return (dest);
}
