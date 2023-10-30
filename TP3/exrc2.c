#include <stdio.h>
int main()
{
    int a, b;
    printf("Donner un entier A \n");
    scanf("%d", &a);
    printf("Donner un entier B \n");
    scanf("%d", &b);
    if (a > b)
        printf("A = %d est superieur a B = %d", a, b); // A = 10 est supérieur à B = 8
    else if (a < b)
        printf("A = %d est inferieur a B = %d", a, b); // A = 2 est inférieur à B = 5
    else
        printf("A = %d est egal a B = %d", a, b); // A = 7 est égal à B = 7
    return 0;
}

// le 1er program va envoyer un message que le nombre a est inferieur à b pourtant il sont egales
// Donc on doit ajouter un autre condition pour verifier si a est egale à b ou pas