#include <stdio.h>
int main()
{
    float a, b, x;
    printf("Donner la valeur de a: ");
    scanf("%f", &a);
    printf("Donner la valeur de b: ");
    scanf("%f", &b);

    x = -b / a;
    printf("La valeur de x est : %.2f\n", x);
    printf("l'equation est : %.2f x %.2f + %.2f = 0\n", a, x, b);

    return 0;
}
