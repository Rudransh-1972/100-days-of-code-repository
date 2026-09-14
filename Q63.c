// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int n, m, i, k;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d of the first array: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        printf("Enter element %d of the second array: ", i + 1);
        scanf("%d", &b[i]);
    }
    k = 0;
    for (i = 0; i < n; i++)
    {
        c[k++] = a[i];
    }
    for (i = 0; i < m; i++)
    {
        c[k++] = b[i];
    }
    printf("Merged array: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}