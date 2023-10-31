#include <stdio.h>
int main()
{
    int i, N, n1, n2;
    float moy;
    printf("Donner un entier: ");
    scanf("%d", &N);
    i = 0;
    // for (i = 1; i <= N; i++)
    // {
    //     printf("\t \t------------ Instruction [%d] ------------\n", i);
    //     printf("[%d] - Donner deux entiers n1 et n2: ", i);
    //     scanf("%d %d", &n1, &n2);
    //     printf("[%d] - la somme de %d + %d = %d\n", i, n1, n2, n1 + n2);
    //     printf("[%d] - le produit de %d * %d = %d \n", i, n1, n2, n1 * n2);
    //     moy = (N + i) / 2;
    //     printf("[%d] - la moyenne de (%d + %d)/2 = %.2f\n", i, n1, n2, moy);
    // }
    i = 0;
    while (i < N)
    {
        printf("\t \t------------ Instruction [%d] ------------\n", i + 1);
        printf("[%d] - Donner deux entiers n1 et n2: ", i + 1);
        scanf("%d %d", &n1, &n2);
        printf("[%d] - la somme de %d + %d = %d\n", i + 1, n1, n2, n1 + n2);
        printf("[%d] - le produit de %d * %d = %d \n", i + 1, n1, n2, n1 * n2);
        moy = (N + i) / 2;
        printf("[%d] - la moyenne de (%d + %d)/2 = %.2f\n", i + 1, n1, n2, moy);
        i++;
    }
    //  i = 0;
    // do
    // {
    //     printf("\t \t------------ Instruction [%d] ------------\n", i+1);
    //     printf("[%d] - Donner deux entiers n1 et n2: ", i + 1);
    //     scanf("%d %d", &n1, &n2);
    //     printf("[%d] - la somme de %d + %d = %d\n", i + 1, n1, n2, n1 + n2);
    //     printf("[%d] - le produit de %d * %d = %d \n", i + 1, n1, n2, n1 * n2);
    //     moy = (N + i) / 2;
    //     printf("[%d] - la moyenne de (%d + %d)/2 = %.2f\n", i + 1, n1, n2, moy);
    //     i++;
    // } while (i < N);
}