#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, sum1, sum2;
    // Demande à l'utilisateur d'entrer quatre nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &num2);
    printf("Entrez le troisième nombre : ");
    scanf("%d", &num3);
    printf("Entrez le quatrième nombre : ");
    scanf("%d", &num4);

    // Calcule la somme en utilisant cinq variables
    sum1 = num1 + num2 + num3 + num4;
    // Affiche la somme calculée en utilisant cinq variables
    printf("La somme des nombres (en utilisant cinq variables) est : %d\n", sum1);

    // Calcule la somme en utilisant seulement deux variables
    sum2 = num1;
    sum2 += num2;
    sum2 += num3;
    sum2 += num4;
    // Affiche la somme calculée en utilisant deux variables
    printf("La somme des nombres (en utilisant deux variables) est : %d\n", sum2);

    return 0;
}
