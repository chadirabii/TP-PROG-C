#include <stdio.h>

int main()
{
    int jj, mm, aa, TotalJours;

    printf("Entrer une date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jj, &mm, &aa);

    switch (mm)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        TotalJours = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        TotalJours = 30;
        break;
    case 2:
        if ((aa % 4 == 0 && aa % 100 != 0) || (aa % 400 == 0))
        {
            TotalJours = 29;
        }
        else
        {
            TotalJours = 28;
        }
        break;
    default:
        TotalJours = 0;
        break;
    }

    if ((jj < 1 || jj > TotalJours || mm < 1 || mm > 12 || aa < 1))
    {
        printf("Date invalide.\n");
    }
    else
    {
        if (jj == TotalJours && mm == 12)
        {
            printf("la date suivante est : %d / %d / %d\n", 1, 1, aa + 1);
        }
        else
        {
            if (jj == TotalJours)
            {
                printf("la date suivante est : %d / %d / %d\n", 1, mm + 1, aa);
            }
            else
            {
                printf("la date suivante est : %d / %d / %d\n", jj + 1, mm, aa);
            }
        }
    }

    return 0;
}
