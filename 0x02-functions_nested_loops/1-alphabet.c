#include "holberton.h"

/**
 * print_alphabet - Entry
 * Description: a function that prints the alphabet,
 * in lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter - 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
