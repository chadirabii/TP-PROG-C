#include <stdio.h>

int main()
{
    char sexe;
    float PI, poids, BMI;
    int taille;

    printf("Donner le sexe du personne (M/F): ");
    scanf(" %c", &sexe);

    while (sexe != 'M' && sexe != 'F' && sexe != 'm' && sexe != 'f')
    {
        printf("sexe invalide\n");
        printf("--------------------------\n");
        printf("Donner le sexe du personne (M/F): ");
        scanf(" %c", &sexe);
    }

    printf("donner la taille du personne en cm : ");
    scanf("%d", &taille);
    printf("donner votre poids : ");
    scanf("%f", &poids); 

    BMI = poids / (taille * taille / 10000.0); 

    if (BMI < 27)
        printf("Normale\n");
    else if (BMI >= 27 && BMI < 32)
        printf("Obese\n");
    else
        printf("Malade\n");

    if (sexe == 'M' || sexe == 'm')
    {
        PI = (taille - 100) - ((taille - 150) / 4.0);
        if (PI < 0)
        {
            PI = 0;
        }
        printf("Le Poids Ideal PI de cet homme est : %.2f\n", PI);
    }
    else
    {
        PI = (taille - 100) - ((taille - 150) / 2.0);
        if (PI < 0)
        {
            PI = 0;
        }
        printf("Le Poids Ideal PI de cette femme est : %.2f\n", PI);
    }

    return 0;
}
