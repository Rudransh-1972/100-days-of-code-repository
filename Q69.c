// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array: ", i + 1);
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int second = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second)
        {
            second = a[i];
        }
    }

    printf("Second largest element: %d\n", second);

    return 0;
}