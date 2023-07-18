#include "main.h"
/**
 * main - program that prints value
 * Description: with proper grammar, but the outcome is a piece of art,
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
