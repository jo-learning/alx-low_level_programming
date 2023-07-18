#include "main.h"
/**
 * _islower -function that checks for lowercase character
 * @c: integer number
 * Description: with proper grammar, but the outcome is a piece of art,
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
