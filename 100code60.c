#include <stdio.h>

int main() {
    int n, i, total = 0, leftSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {
        total -= arr[i];   // now total = right sum

        if (leftSum == total) {
            printf("Pivot index = %d\n", i);
            return 0;      // gives the leftmost pivot
        }

        leftSum += arr[i];
    }

    printf("Pivot index = -1\n");

    return 0;
}