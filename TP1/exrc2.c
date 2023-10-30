#include <stdio.h>
// Inclusion de la bibliothèque pour l'entrée/sortie standard en C.

int main(void)
{
    // Déclaration d'une variable de type char appelée x.
    char x;

    // Assignation de la valeur 107 (correspondant au caractère 'k' en ASCII) à x.
    x = 107;

    // Affiche la valeur de x en décimal, suivi d'une tabulation.
    printf("%d \t", x);

    // Affiche la valeur de x en octal, suivi d'un saut de ligne.
    printf("%o \n", x);

    // Affiche la chaîne de caractères suivie d'un retour chariot.
    puts("Encore un affichage \r");

    // Affiche la valeur de x en hexadécimal
    printf("%x ", x);

    // Affiche la valeur de x en tant que caractère, suivi d'un saut de ligne.
    printf("\n%c \n", x);

    // Affiche la conversion de x en majuscule en utilisant la différence ASCII.
    printf(" %c est converti en %c", x, x - 32);

    // Indique la fin du programme avec un code de retour 0.
    return 0;
}
