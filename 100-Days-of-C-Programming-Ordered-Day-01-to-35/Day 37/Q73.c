#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rowSum[10];
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
        rowSum[i] = 0;

        for (j = 0; j < columns; j++)
        {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    for (i = 0; i < rows; i++)
    {
        printf("%d ", rowSum[i]);
    }

    printf("\n");

    return 0;
}
