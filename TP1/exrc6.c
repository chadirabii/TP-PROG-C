#include <stdio.h>

int main(void)
{
    int A, B, C, Temp_Var;
    printf("Entrez la valeur pour A : ");
    scanf("%d", &A);
    printf("Entrez la valeur pour B : ");
    scanf("%d", &B);
    printf("Entrez la valeur pour C : ");
    scanf("%d", &C);

    // Permutation des valeurs
    Temp_Var = A;
    A = B;
    B = C;
    C = Temp_Var;

    // Affiche les valeurs après permutation
    printf("Après permutation :\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
