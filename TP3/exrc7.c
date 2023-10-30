#include <stdio.h>
#include <math.h>

int main()
{
    int annee;
    printf("Entrer une annee : ");
    scanf("%d", &annee);

    // si l'annee est divisible par 4 et non divisible par 100 ou divisible par 400
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
    {
        printf("%d est une annee bissextile.\n", annee);
    }
    else
    {
        printf("%d n'est pas une annee bissextile.\n", annee);
    }
    return 0;
}