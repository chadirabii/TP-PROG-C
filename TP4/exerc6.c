#include <stdio.h>

int main()
{
    int n, i = 1, fact = 1;
    printf("Entrez un entier positif: ");
    scanf("%d", &n);
    // while (i <= n)
    // {
    //     fact *= i;
    //     i++;
    // }
    // printf("La factorielle de %d est %d", n, fact);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("La factorielle de %d est %d", n, fact);

    return 0;
}
