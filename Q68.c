// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main()
{
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of an array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++)
    {
        arr[i + 1] = arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}