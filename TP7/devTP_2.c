#include <stdio.h>

#define MAX_ELEMENTS 50
#define MAX_ROWS 10
#define MAX_COLS 10

void Saisir_Tab(int T[], int N)
{
    printf("------------ Remplissage du tableau ------------\n");
    printf("Saisie des elements du tableau:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Donner l'element n [%d]: ", i + 1);
        scanf("%d", &T[i]);
    }
    printf("------------ Remplissage de la matrice ---------\n");
}

void Saisir_Mat(int M[][MAX_COLS], int L, int C)
{

    printf("Saisie des elements de la matrice:\n");
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Donner l'element du matrice [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
}

void Afficher_ElmAbs(int T[], int N, int M[][MAX_COLS], int L, int C)
{
    int elmAbs[MAX_ELEMENTS];
    int nbElmAbs = 0;

    for (int i = 0; i < N; i++)
    {
        int trouve = 0;
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < C; k++)
            {
                if (M[j][k] == T[i])
                {
                    trouve = 1;
                    break;
                }
            }
            if (trouve)
                break;
        }
        if (!trouve)
        {
            elmAbs[nbElmAbs] = T[i];
            nbElmAbs++;
        }
    }

    if (nbElmAbs > 0)
    {
        printf("Les elements suivants ne se trouvent pas dans la matrice: ");
        for (int i = 0; i < nbElmAbs; i++)
        {
            printf("%d ", elmAbs[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Tous les elements du tableau figurent dans la matrice.\n");
    }
}

int main()
{
    int N;
    int T[MAX_ELEMENTS];
    int L, C;
    int M[MAX_ROWS][MAX_COLS];

    printf("Nombre d'elements du tableau (N <= %d): ", MAX_ELEMENTS);
    scanf("%d", &N);

    while (N <= 0 || N > MAX_ELEMENTS)
    {
        printf("[Erreur !]: Nombre d'elements du tableau doit etre compris entre 1 et %d. Reessayez: ", MAX_ELEMENTS);
        scanf("%d", &N);
    }

    Saisir_Tab(T, N);

    printf("Nombre de lignes de la matrice (L <= %d): ", MAX_ROWS);
    scanf("%d", &L);

    while (L <= 0 || L > MAX_ROWS)
    {
        printf("[Erreur !]: Nombre de lignes de la matrice doit etre compris entre 1 et %d. Reessayez: ", MAX_ROWS);
        scanf("%d", &L);
    }

    printf("Nombre de colonnes de la matrice (C <= %d): ", MAX_COLS);
    scanf("%d", &C);

    while (C <= 0 || C > MAX_COLS)
    {
        printf("[Erreur !]: Nombre de colonnes de la matrice doit etre compris entre 1 et %d. Reessayez: ", MAX_COLS);
        scanf("%d", &C);
    }

    Saisir_Mat(M, L, C);

    Afficher_ElmAbs(T, N, M, L, C);

    return 0;
}
