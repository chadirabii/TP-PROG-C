#include <stdio.h>

int main()
{
    int n, i, j, espace;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);
    espace = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= espace; j++)
        {
            printf(" ");
        }

        espace--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
