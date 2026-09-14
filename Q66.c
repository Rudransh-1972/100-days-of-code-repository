// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

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

    int insert;
    printf("Enter the element to be inserted: ");
    scanf("%d", &insert);

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > insert)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = insert;
            break;
        }
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}