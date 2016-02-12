// Autorisées : ft_putchar

//Écrire une fonction qui affiche l’alphabet en minuscule sur une seule ligne, dans
//l’ordre croissant, à partir de la lettre ’a’.

//Elle devra être prototypée de la façon suivante :
//void ft_print_alphabet();

#include <unistd.h>

void ft_print_alphabet()
{
    char lettre;
    lettre = 'a';
    
    while (lettre <= 'z')
    {
        write(1, &lettre, 1);
        lettre++;
    }
}

void    ft_print_alphabet2()
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int main()
{
    ft_print_alphabet2();
    return(0);
}