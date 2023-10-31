#include <stdio.h>

int main()
{
    int N, i;
    printf("Donner un entier: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
        printf("%d x %d = %d\n", N, i, N * i);
}