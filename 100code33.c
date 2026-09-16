#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, symmetric = 1;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Matrix is symmetric.");
    else
        printf("Matrix is not symmetric.");

    return 0;
}