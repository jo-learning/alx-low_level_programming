#include "main.h"
/**
 * main - program that prints value
 * Description: with proper grammar, but the outcome is a piece of art,
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int las;

	las = n % 10;
	if (las < 0)
	{
		las = las * -1;
	}
	_putchar(las + '0');
	return (las);
}
