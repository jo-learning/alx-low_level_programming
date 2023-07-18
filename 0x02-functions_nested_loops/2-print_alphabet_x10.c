#include "main.h"
/**
 * print_alphabet_x10 -function that prints 10 times the alphabet
 * Description: with proper grammar, but the outcome is a piece of art,
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
