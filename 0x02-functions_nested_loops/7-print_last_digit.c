#include "main.h"
#include <stdio.h> // for printf

/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
        if (n < 0)
                n = n * -1;
        int last_digit = n % 10;
        printf("n = %d, last_digit = %d\n", n, last_digit);
        _putchar((last_digit) + '0');
        return (last_digit);
}

