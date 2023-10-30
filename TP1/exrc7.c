#include <stdio.h>
int main(void)
{
    int num1, num2;
    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &num2);

    // Affiche le quotient et le reste de la division entière
    printf("Quotient : %d\n", num1 / num2);
    printf("Reste : %d\n", num1 % num2);

    // Affiche le quotient rationnel
    printf("Quotient Rationnel : %.2f\n", (float)num1 / num2);

    return 0;
}
