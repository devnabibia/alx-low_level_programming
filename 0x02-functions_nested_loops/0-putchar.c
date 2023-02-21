#include "main.h"

/**
 * main - prints the string "putchar" from a character array on a new line.
 * Return: 0 on success.
 */
int main(void)
{
    char c[] = "_putchar";
    int i;

    for (i = 0; i < 8; i++)  // print the first 8 characters of the string
    {
        _putchar(c[i]);
    }

    _putchar('\n');  // print a newline character on a separate line

    return (0);
}

