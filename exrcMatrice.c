#include <stdio.h>

int main()
{
    int m;
    int n;

    printf("donner la taille de A: ");
    scanf("%d", &m);
    printf("donner la taille de B: ");
    scanf("%d", &n);

    int A[m];
    int B[n];
    int C[m + n];

    int i, j, k;

    for (i = 0; i < m; i++)
    {
        printf("donner la valeur de A[%d]: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("-------------------------------------\n");

    for (j = 0; j < n; j++)
    {
        printf("donner la valeur de B[%d]: ", j + 1);
        scanf("%d", &B[j]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    while (i < m)
    {
        C[k] = A[i];
        i++;
        k++;
    }

    while (j < n)
    {
        C[k] = B[j];
        j++;
        k++;
    }

    printf("les elements apres la fusion sont \n ");
    for (int l = 0; l < k; l++)
    {
        printf("%d ", C[l]);
    }
    printf("\n");

    return 0;
}