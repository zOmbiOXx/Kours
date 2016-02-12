#include <unistd.h>

void ft_putchar(char caractere)
{
    write(1, &caractere, 1);
}

int main()
{
    ft_putchar('a');
    ft_putchar('\n');
    return(0);
}