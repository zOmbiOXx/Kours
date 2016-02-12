//Fonctions Autorisées : ft_putchar()

//• Écrire une fonction qui affiche, dans l’ordre croissant, toutes les différentes combinaisons
//de trois chiffres différents dans l’ordre croissant - oui, la répétition est
//volontaire.

//Cela donne quelque chose comme ça :
//012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789

//987 n’est pas là car 789 est déjà présent

//999 n’est pas là car ce nombre ne comporte pas exclusivement des chiffres différents
//les uns des autres

//Elle devra être prototypée de la façon suivante :
//void ft_print_comb();

void ft_print_Comb()
{
    char a, b, c;
    while (a <= 9 && b <= 9 && c <= 9)
    {
        c++;
    }
}