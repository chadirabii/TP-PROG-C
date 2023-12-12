#include <stdio.h>

int main()
{
    const int m = 3;
    int A[m][m];
    int C[50];
    int Tab[m * m];
    int i, j, k = 0;
    int element;
    int found = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("donner la valeur de la ligne %d et colonne %d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entrez l'element a rechercher : ");
    scanf("%d", &element);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (A[i][j] == element)
            {
                printf("L'element %d se trouve a la ligne %d et colonne %d\n", element, i + 1, j + 1);
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < m; j++)
        {
            printf("%d \t", A[i][j]);
            Tab[k] = A[i][j];
            k++;
        }
        printf("\n");
    }

    printf("\n");
    for (k = 0; k < m * m; k++)
    {
        printf("%d ", Tab[k]);
    }

    return 0;
}