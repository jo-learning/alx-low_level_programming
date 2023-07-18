#include "main.h"
/**
 * main - program that prints value
 * Description: with proper grammar, but the outcome is a piece of art,
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 20)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
