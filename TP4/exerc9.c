#include <stdio.h>

int main()
{
    int n, nb_pos = 0, nb_neg = 0, nb_pairs = 0, nb_imp = 0;
    int max, min;

    printf("Entrez le nombre d'entiers : ");
    scanf("%d", &n);

    printf("Entrez l'entier [1] : ");
    scanf("%d", &max);
    min = max;

    if (max > 0)
    {
        nb_pos++;
    }
    else if (max < 0)
    {
        nb_neg++;
    }

    if (max % 2 == 0)
    {
        nb_pairs++;
    }
    else
    {
        nb_imp++;
    }

    for (int i = 1; i < n; i++)
    {
        int x;
        printf("Entrez l'entier [%d] : ", i + 1);
        scanf("%d", &x);

        if (x > max)
        {
            max = x;
        }

        if (x < min)
        {
            min = x;
        }

        if (x > 0)
        {
            nb_pos++;
        }
        else if (x < 0)
        {
            nb_neg++;
        }

        if (x % 2 == 0)
        {
            nb_pairs++;
        }
        else
        {
            nb_imp++;
        }
    }

    printf("Nombre d'entiers posetifs : %d\n", nb_pos);
    printf("Nombre d'entiers negatifs : %d\n", nb_neg);
    printf("Nombre d'entiers pairs : %d\n", nb_pairs);
    printf("Nombre d'entiers impaires : %d\n", nb_imp);
    printf("Le maximum est : %d\n", max);
    printf("Le minimum est : %d\n", min);

    return 0;
}