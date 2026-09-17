#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, columns;
    int i, j;
    int symmetric = 1;

    scanf("%d %d", &rows, &columns);

    if (rows != columns)
    {
        printf("False\n");
        return 0;
    }

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
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0)
        {
            break;
        }
    }

    if (symmetric == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
