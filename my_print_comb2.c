/*
** EPITECH PROJECT, 2022
** my_print_comb2
** File description:
** cpoolday3
*/

#include <unistd.h>

void my_putchar(char c);

void number(int i)
{
    my_putchar(48 + i / 10);
    my_putchar(48 + i % 10);
}

int my_print_comb2(void)
{
    for (int i = 0; i <= 97; i++) {
        for (int j = i + 1; j <= 99; j++) {
            number(i);
            my_putchar(32);
            number(j);
            my_putchar(44);
            my_putchar(32);
        }
    }
    my_putchar('9');
    my_putchar('8');
    my_putchar(' ');
    my_putchar('9');
    my_putchar('9');
    return 0;
}
