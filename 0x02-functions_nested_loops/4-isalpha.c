#include "main.h"
/**
 * _isalpha -function that checks for alphabetic character
 * @c: integer number
 * Description: with proper grammar, but the outcome is a piece of art,
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
