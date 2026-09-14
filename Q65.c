// Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

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

    int k;
    printf("Enter the element to be searched: ");
    scanf("%d", &k);

    int low = 0, high = n - 1, found = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("Found at index %d\n", found);
    }

    return 0;
}