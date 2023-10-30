#include <stdio.h>

int main()
{
    int anne;
    printf("entre un anne :!\n");
    scanf("%d", &anne);
    if ((anne % 4 == 0 && anne % 100 != 0) || anne == 400)
        printf("%d est une annee bissextile ", anne);
    else
        printf("%d est une annee non bissextile ", anne);

    return 0;
}