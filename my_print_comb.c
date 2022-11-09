/*
** EPITECH PROJECT, 2022
** my_print_comb
** File description:
** cpoolday3
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_comb(void)
{
    for (int i = '0', j = '1', k = '2'; i < '8';) {
        my_putchar(i);
        my_putchar(j);
        my_putchar(k);
        if (i == '7' && j == '8' && k == '9')
            return (0);
        my_putchar(44);
        my_putchar(32);
        k++;
        if (j > '7') {
            i++;
            j = i + 1;
            k = j + 1;
        }
        if (k > '9') {
            j++;
            k = j + 1;
        }
    }
}

int main()
{
    my_print_comb();
    return 0;
}
