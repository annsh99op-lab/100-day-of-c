#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, columns;
    int i, j;
    int sum = 0;

    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
