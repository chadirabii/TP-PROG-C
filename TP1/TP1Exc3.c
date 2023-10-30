#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    c = a;
    a = b;
    b = c;
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    return 0;
}