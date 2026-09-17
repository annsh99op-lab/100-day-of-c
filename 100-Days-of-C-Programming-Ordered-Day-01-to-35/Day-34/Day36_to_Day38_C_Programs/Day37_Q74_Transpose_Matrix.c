#include <stdio.h>

int main()
{
    int matrix[10][10];
    int transpose[10][10];
    int rows, columns;
    int i, j;

    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (i = 0; i < columns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
