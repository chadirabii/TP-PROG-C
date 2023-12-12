#include <stdio.h>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

// Fonction de remplissage de la matrice
void remplMat(int mat[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    printf("Remplissage de la matrice :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Entrez l'element [%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Fonction de calcul de la Trans
void calcTrans(int mat[MAX_ROWS][MAX_COLS], int rows, int cols, int Trans[MAX_COLS][MAX_ROWS])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Trans[j][i] = mat[i][j];
        }
    }
}

// Fonction d'affichage de la Trans
void afficherTrans(int Trans[MAX_COLS][MAX_ROWS], int rows, int cols)
{
    printf("Trans de la matrice :\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", Trans[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[MAX_ROWS][MAX_COLS];
    int Trans[MAX_COLS][MAX_ROWS];
    int rows, cols;

    printf("Entrez le nombre de lignes de la matrice : ");
    scanf("%d", &rows);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &cols);

    remplMat(mat, rows, cols);
    calcTrans(mat, rows, cols, Trans);
    afficherTrans(Trans, cols, rows);

    return 0;
}
