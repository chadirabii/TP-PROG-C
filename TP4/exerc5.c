#include <stdio.h>

int main()
{
    int longueur, largeur;
    printf("Entrez la longueur du rectangle: ");
    scanf("%d", &longueur);
    printf("Entrez la largeur du rectangle: ");
    scanf("%d", &largeur);

    for (int i = 0; i < largeur; i++)
    {
        for (int j = 0; j < longueur; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
