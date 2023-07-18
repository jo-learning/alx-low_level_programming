#include "main.h"
/**
 * print_last_digit -function that prints the last digit of a number
 * @n: integer
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
